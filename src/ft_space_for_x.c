/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_for_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 20:32:53 by tmann             #+#    #+#             */
/*   Updated: 2019/03/20 13:38:03 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void		hp_print_0x_little(t_print *po, char *str)
{
	if (po->sharp == 1 && po->zero == 1 && po->width > 0 && *str != '0')
	{
		ft_putstr("0x");
		po->width -= 2;
		po->returnsize += 2;
	}
}

void		ft_space_string_x_little(char *str, t_print *po, int sizestr)
{
	sizestr = ft_strlen(str);
	po->returnsize += sizestr;
	hp_print_0x_little(po, str);
	while (po->width > sizestr && po->minus == 0)
	{
		if (po->zero == 1 && po->accuracy == 0)
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

void		hp_print_0x_big(t_print *po, char *str)
{
	if (po->sharp == 1 && po->zero == 1 && po->width > 0 && *str != '0')
	{
		ft_putstr("0X");
		po->width -= 2;
		po->returnsize += 2;
		return ;
	}
}

void		ft_space_string_x_big(char *str, t_print *po, int sizestr)
{
	sizestr = ft_strlen(str);
	po->returnsize += sizestr;
	if (po->zero == 1)
		hp_print_0x_big(po, str);
	while (po->width > sizestr && po->minus == 0)
	{
		if (po->zero == 1)
			ft_putchar('0');
		else
			ft_putchar(' ');
		po->width--;
		po->returnsize++;
	}
	hp_print_0x_big(po, str);
	ft_putstr((char*)str);
	while (po->width > sizestr && po->minus == 1)
	{
		ft_putchar(' ');
		po->width--;
		po->returnsize++;
	}
}
