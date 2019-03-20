/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_for_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 20:32:53 by tmann             #+#    #+#             */
/*   Updated: 2019/03/20 21:51:17 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void		hp_print_0x_little(t_print *po, char *str)
{
	if (po->accuracy < (int)ft_strlen(str) && *str != '0' && po->accuracy
		&& po->sharp == 1)
	{
		po->width -= 2;
		return ;
	}
	if (po->sharp == 1 && po->zero == 1 && po->width > 0 && *str != '0')
	{
		ft_putstr("0x");
		po->width -= 2;
		po->returnsize += 2;
		po->sharp = 0;
		return ;
	}
}

void		ft_space_string_x_little(char *str, t_print *po, int sizestr)
{
	sizestr = ft_strlen(str);
	po->returnsize += sizestr;
	// if (po->accuracy < po->width)
	// 	po->width += 2;
	if (po->accuracy != -1)
	if (po->width <= 0 || po->zero == 1)
		hp_print_0x_little(po, str);
	if (po->sharp == 1 && *str != '0' && po->width > po->accuracy && *str != ' ')
		po->width -= 2;
	while (po->width > sizestr && po->minus == 0)
	{
		if (po->zero == 1 && po->accuracy == 0)
			ft_putchar('0');
		else
			ft_putchar(' ');
		po->width--;
		po->returnsize++;
	}
	if (po->sharp == 1 && *str != '0' && *str != ' ')
	{
		ft_putstr("0x");
		po->width -= 2;
		po->returnsize += 2;
	}
	ft_putstr((char*)str);
	// po->width += sizestr;
	while (po->width > sizestr && po->minus == 1)
	{
		ft_putchar(' ');
		po->width--;
		po->returnsize++;
	}
}

void		hp_print_0x_big(t_print *po, char *str)
{
	if (po->accuracy < (int)ft_strlen(str) && *str != '0' && po->accuracy
		&& po->sharp == 1)
	{
		po->width -= 2;
		return ;
	}
	if (po->sharp == 1 && po->zero == 1 && po->width > 0 && *str != '0')
	{
		ft_putstr("0X");
		po->width -= 2;
		po->returnsize += 2;
		po->sharp = 0;
		return ;
	}
}

void		ft_space_string_x_big(char *str, t_print *po, int sizestr)
{
	sizestr = ft_strlen(str);
	po->returnsize += sizestr;
	// if (po->accuracy < po->width)
	// 	po->width += 2;
	if (po->accuracy != -1)
	if (po->width <= 0 || po->zero == 1)
		hp_print_0x_little(po, str);
	if (po->sharp == 1 && *str != '0' && po->width > po->accuracy && *str != ' ')
	 	po->width -= 2;
	while (po->width > sizestr && po->minus == 0)
	{
		if (po->zero == 1 && po->accuracy == 0)
			ft_putchar('0');
		else
			ft_putchar(' ');
		po->width--;
		po->returnsize++;
	}
	if (po->sharp == 1 && po->accuracy < sizestr && *str != '0' && po->accuracy)
	{
		ft_putstr("0X");
		po->width -= 2;
		po->returnsize += 2;
	}
	ft_putstr((char*)str);
	// po->width += sizestr;
	while (po->width > sizestr && po->minus == 1)
	{
		ft_putchar(' ');
		po->width--;
		po->returnsize++;
	}
}
