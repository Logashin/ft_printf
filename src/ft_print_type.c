/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 13:03:15 by tmann             #+#    #+#             */
/*   Updated: 2019/03/12 21:35:40 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_print_procent(char *format, t_print *po)
{
	if (format[po->i] == '%')
	{
		write(1, "%", 1);
		po->returnsize++;
	}
	return (1);
}

int			ft_print_char(t_print *po, va_list ap)
{
	char sim;

	sim = (char)va_arg(ap, int);
	if (po->width)
	{
		po->width--;
		while (po->width && po->minus == 0)
		{
			ft_putchar(' ');
			po->width--;
			po->returnsize++;
		}
		ft_putchar(sim);
		while (po->width && po->minus > 0)
		{
			ft_putchar(' ');
			po->width--;
			po->returnsize++;
		}
		po->returnsize++;
		return (1);
	}
	ft_putchar(sim);
	po->returnsize += 1;
	return (1);
}

int			ft_print_string(t_print *po, va_list ap)
{
	char *str;

	str = va_arg(ap, char*);
	if (str == NULL)
	{
		ft_putstr("(null)");
		po->returnsize += 6;
	}
	else
		ft_space_string(str, po);
	return (1);
}

void		ft_space_string(char *str, t_print *po)
{
	int sizestr;

	sizestr = 0;
	sizestr = (int)ft_strlen(str);
	if (po->accuracy > 0)
		str = ft_accuracy_string(str, po, sizestr);
	else
		po->returnsize += sizestr;
	while (po->width > sizestr && po->minus == 0)
	{
		if (po->zero == 1)
			ft_putchar('0');
		else
			ft_putchar(' ');
		po->width--;
		po->returnsize++;
	}
	ft_putstr((char*)str);
	while (po->width > sizestr && po->minus == 1)
	{
		ft_putchar(' ');
		po->width--;
		po->returnsize++;
	}
}

char		*ft_accuracy_string(char *str, t_print *po, int sizestr)
{
	if (po->accuracy < sizestr)
	{
		sizestr -= po->accuracy;
		po->width += sizestr;
	}
	str = ft_strsub(str, 0, po->accuracy);
	po->returnsize = (int)ft_strlen(str);
	return (str);
}
