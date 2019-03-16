/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 19:50:55 by tmann             #+#    #+#             */
/*   Updated: 2019/03/16 20:34:01 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void		ft_space_string_u(char *str, t_print *po)
{
	int sizestr;

	sizestr = ft_strlen(str);
	po->returnsize += sizestr;
	if (*str == '-' && po->width > sizestr && po->zero == 1)
	{
		ft_putchar('-');
		str++;
	}
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

void		hp_print_accuracy_u(char *str, t_print *po, int sizestr)
{
	if (po->space == 1 && po->minus == 1 && str[0 - 1] != '-'
		&& po->width > po->accuracy && *str != '-')
	{
		ft_putchar(' ');
		po->returnsize++;
		po->width--;
	}
	if (po->space == 1 && po->plus == 0 && *str != '-'
		&& str[0 - 1] != '-' && po->width - sizestr <= po->accuracy)
	{
		ft_putchar(' ');
		po->returnsize++;
	}
}

void		ft_print_accuracy_u(char *str, t_print *po,
	int sizestr, int saveacc)
{
	saveacc = po->accuracy;
	sizestr = ft_strlen(str);
	if (po->accuracy < sizestr)
	{
		ft_space_string_u(str, po);
		return ;
	}
	if (po->accuracy >= sizestr)
	{
		po->accuracy -= sizestr;
		if (*str == '-')
		{
			po->accuracy++;
			str++;
			if (po->width <= po->accuracy)
			{
				ft_putchar('-');
				po->minus = 0;
			}
		}
	}
	hp_print_accuracy_u(str, po, sizestr);
	if (po->width > po->accuracy)
		ft_space_accuracy_dec(str, po, sizestr);
	hp2_print_accuracy_dec(str, po, sizestr);
}

int			ft_print_u(t_print *po, va_list ap)
{
	char	*str;

	str = ft_add_u_mod_length(po, ap, 0);
	if (po->accuracy == -1 && *str == '0' && po->width == 0)
		return (1);
	if (po->accuracy == -1 && *str == '0' && po->width > 0)
		*str = ' ';
	if (po->accuracy == 0)
		ft_space_string_u(str, po);
	else
		ft_print_accuracy_u(str, po, 0, 0);
	free(str);
	return (1);
}
