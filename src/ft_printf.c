/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 13:03:43 by tmann             #+#    #+#             */
/*   Updated: 2019/03/11 13:57:24 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_clear_struct(t_print *po)
{
	po->minus = 0;
	po->plus = 0;
	po->sharp = 0;
	po->space = 0;
	po->zero = 0;
	po->width = 0;
	po->accuracy = 0;
}

t_print	*ft_struct_creat(t_print *po)
{
	if (!(po = (t_print*)malloc(sizeof(t_print))))
		return (NULL);
	po->returnsize = 0;
	po->minus = 0;
	po->plus = 0;
	po->sharp = 0;
	po->space = 0;
	po->zero = 0;
	po->width = 0;
	po->accuracy = 0;
	po->i = 0;
	po->check = 5;
	return (po);
}

void		ft_parse_format(char *format, t_print *po, va_list ap)
{
	while (format[po->i])
	{
		ft_clear_struct(po);
		if (format[po->i] == '%' && format[po->i + 1] != '\0')
		{
			po->i++;
			ft_param(format, po, ap);
			po->check = 5;
		}
		else if (format[po->i] != '%' && format[po->i] != '\0')
		{
			ft_putchar(format[po->i]);
			po->returnsize++;
			po->i++;
		}
	}
}

void		ft_param(char *format, t_print *po, va_list ap)
{
	int check;

	check = 0;
	while (ft_type(format, po, ap) == 0 && format[po->i] != '\0')
	{
		ft_flags(format, po);
		ft_width_param(format, po);
		ft_accuracy(format, po);
		ft_mod_length(format, po);
		if (po->check == 0)
		{
			po->i++;
			return ;
		}
	}
}

int		ft_printf(const char *format, ...)
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
	return ((int)po->returnsize);
}

//        printf("\n_______________________\n");
//        printf("plus%d #%d minus%d space%d zero%d width%d accuracy%d",po->plus,po->sharp, po->minus, po->space, po->zero, po->width, po->accuracy);
//        printf("\n_______________________\n");
//char *str;
//char *str1;
//int numb;
//va_list ap;
//va_start(ap, format);
//str = va_arg(ap, char*);
//str1 = va_arg(ap, char*);
//numb = va_arg(ap, int);
//ft_putstr(format);
//ft_putstr(str);
//ft_putstr(str1);
//ft_putnbr(numb);
//va_end(ap);

// i = 0;
// while (format[i])
// {
// if (format[i] != '%' && format[i] != 's')
// {
// ft_putchar(format[i]);
// po.returnsize++;
// }
// if (format[i] == '%' && format[i + 1] != '\0')
// {
// if (format[i + 1] == 's')
// {
// str = va_arg(ap, char*);
// ft_putstr(str);
// po.returnsize += ft_strlen(str);
// }
// }
// i++;
// }
