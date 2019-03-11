/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 13:02:19 by tmann             #+#    #+#             */
/*   Updated: 2019/03/11 14:00:54 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_type(char *format, t_print *po, va_list ap)
{
	int stop;

	stop = 0;
	if (format[po->i] == '%')
		stop = ft_print_procent(format, po);
	if (format[po->i] == 'c' || format[po->i] == 'C')
		stop = ft_print_char(po, ap);
	if (format[po->i] == 's')
		stop = ft_print_string(po, ap);
	if (format[po->i] == 'd' || format[po->i] == 'i')
		stop = ft_print_int(po, ap);
	po->i += stop;
//  if(stop == 0)
//	po->check--;
	return (stop);
}

void		ft_flags(char *format, t_print *po)
{
	while (format[po->i] == '0' || format[po->i] == ' ' ||
		format[po->i] == '#' || format[po->i] == '+' || format[po->i] == '-')
	{
		if (format[po->i] == '0')
			po->zero = 1;
		if (format[po->i] == ' ')
			po->space = 1;
		if (format[po->i] == '#')
			po->sharp = 1;
		if (format[po->i] == '+')
			po->plus = 1;
		if (format[po->i] == '-')
			po->minus = 1;
		if (po->minus == 1 && po->zero == 1)
			po->zero = 0;
		po->i++;
		po->check--;
	}
}

void		ft_width_param(char *format, t_print *po)
{
	while (format[po->i] >= '0' && format[po->i] <= '9')
	{
		po->width = 0;
		if (format[po->i] == '*')
		{
			po->width = 1;
		}
		if (format[po->i] >= '0' && format[po->i] <= '9')
		{
			while (format[po->i] >= '0' && format[po->i] <= '9')
			{
				po->width = po->width * 10 + format[po->i] - '0';
				po->i++;
			}
		}
		po->check--;
	}
}

void		ft_accuracy(char *format, t_print *po)
{
	if (format[po->i] == '.')
	{
		po->i++;
		po->accuracy = 0;
		if (format[po->i] == '*')
		{
			po->accuracy = 1;
		}
		while (format[po->i] >= '0' && format[po->i] <= '9')
		{
			po->accuracy = po->accuracy * 10 + format[po->i] - '0';
			po->i++;
		}
		po->check--;
	}
}

void		ft_mod_length(char *format, t_print *po)
{
	if (format[po->i] == 'h' && format[po->i + 1] == 'h')
	{
		if (!(po->length = (char*)malloc(sizeof(char) * 3)))
			return ;
		ft_bzero(po->length, 3);
		po->length = "hh";
		po->i += 2;
		po->check--;
		return ;
	}
	if (format[po->i] == 'l' && format[po->i + 1] == 'l')
	{
		if (!(po->length = (char*)malloc(sizeof(char) * 3)))
			return ;
		ft_bzero(po->length, 3);
		po->length = "ll";
		po->i += 2;
		po->check--;
		return ;
	}
	while (format[po->i] == 'h' || format[po->i] == 'l' || format[po->i] == 'L')
	{
		if (!(po->length = (char*)malloc(sizeof(char) * 2)))
			return ;
		ft_bzero(po->length, 2);
		if (format[po->i] == 'h')
			po->length[0] = 'h';
		if (format[po->i] == 'l')
			po->length[0] = 'l';
		if (format[po->i] == 'L')
			po->length[0] = 'L';
		po->i++;
		po->check--;
	}
}
