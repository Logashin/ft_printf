/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help_norm_for_d.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 19:09:59 by tmann             #+#    #+#             */
/*   Updated: 2019/03/13 19:40:36 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void		hp_check_space(char *str, t_print *po, int sizestr)
{
	if (po->space == 0 && str[0] != '-' && po->plus == 1
			&& po->width > sizestr + 1 && po->minus == 0)
		po->width--;
	if (po->space == 1 && str[0] != '-' && po->plus == 1
			&& po->width > sizestr + 1 && po->minus == 0)
		po->width--;
}

void		hp_space_string_dec(char *str, t_print *po, int sizestr)
{
	while (po->width > sizestr && po->minus == 0)
	{
		if (po->zero == 1)
			ft_putchar('0');
		else
			ft_putchar(' ');
		po->width--;
		po->returnsize++;
	}
	if (po->plus == 1 && str[0] != '-' && str[0 - 1] != '-')
	{
		ft_putchar('+');
		po->returnsize++;
		if (po->width > sizestr)
			po->width--;
	}
}

void		hp_print_accuracy_dec(char *str, t_print *po, int sizestr)
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
	if (po->plus == 1 && po->accuracy >= po->width &&
		*str != '-' && str[0 - 1] != '-')
	{
		ft_putchar('+');
		po->returnsize++;
	}
}

void		hp2_print_accuracy_dec(char *str, t_print *po, int sizestr)
{
	while (po->accuracy > 0)
	{
		ft_putchar('0');
		po->accuracy--;
		po->returnsize++;
	}
	ft_putstr(str);
	while (po->width > 0 && po->minus == 1)
	{
		ft_putchar(' ');
		po->returnsize++;
		po->width--;
	}
	po->returnsize += sizestr;
}
