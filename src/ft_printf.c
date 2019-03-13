/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 13:03:43 by tmann             #+#    #+#             */
/*   Updated: 2019/03/13 19:07:50 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void		ft_parse_format(char *format, t_print *po, va_list ap)
{
	while (format[po->i])
	{
		ft_clear_struct(po);
		if (format[po->i] == '%' && format[po->i + 1] != '\0')
		{
			po->i++;
			if (ft_check_valid_param(format, po->i) == 1)
				ft_param(format, po, ap);
			else
				ft_putchar('%');
		}
		else if (format[po->i] != '\0')
		{
			ft_putchar(format[po->i]);
			po->returnsize++;
			po->i++;
		}
	}
}

void		ft_param(char *format, t_print *po, va_list ap)
{
	while (ft_type(format, po, ap) == 0 && format[po->i] != '\0')
	{
		ft_flags(format, po);
		ft_width_param(format, po);
		ft_accuracy(format, po);
		ft_mod_length(format, po);
	}
}

int			ft_printf(const char *format, ...)
{
	va_list ap;
	t_print *po;

	po = NULL;
	po = ft_struct_creat(po);
	if (format)
	{
		va_start(ap, format);
		ft_parse_format((char*)format, po, ap);
		va_end(ap);
	}
	free(po);
	return ((int)po->returnsize);
}

int			ft_check_valid_param(char *str, int i)
{
	int try;

	try = 0;
	while (str[i] == '#' || str[i] == '-' || str[i] == '+' || str[i] == ' '
		|| str[i] == '0' || str[i] == 'l' || str[i] == 'h' || str[i] == '%' ||
		str[i] == '.' || ft_isdigit(str[i]) || str[i] == 'L' || str[i] == '*')
		i++;
	if (str[i] == 's' || str[i] == 's' || str[i] == 'd' || str[i] == 'i'
		|| str[i] == 's' || str[i] == 's' || str[i] == 's' ||
			str[i] == 'c' || str[i] == 's' || str[i] == '\0')
		try++;
	return (try);
}
