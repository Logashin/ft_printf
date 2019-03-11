/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 13:03:15 by tmann             #+#    #+#             */
/*   Updated: 2019/03/11 13:03:20 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_procent(char *format, t_print *po)
{
    if (format[po->i] == '%')
    {
        write(1, "%", 1);
        po->returnsize++;
    }
    return (1);
}

int ft_print_char(t_print *po, va_list ap)
{
    char sim;

    sim = (char)va_arg(ap, int);
    if (po->width)
    {
        po->width--;
        while(po->width && po->minus == 0)
        {
            ft_putchar(' ');
            po->width--;
            po->returnsize++;
        }
        ft_putchar(sim);
        while (po->width && po->minus  > 0)
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

int ft_print_string(t_print *po, va_list ap)
{
    char *str;
    int size;

    size = 0;
    str = va_arg(ap, char*);
    if (po->width)
    {
        size = ft_strlen(str);
        po->width -= size;
        if(po->width > size)
        po->returnsize += po->width;
        while(po->width > 0 && po->minus == 0)
        {
            ft_putchar(' ');
            po->width--;
            po->returnsize++;
        }
    }
    ft_putstr(str);
    while (po->width > 0 && po->minus == 1)
    {
        ft_putchar(' ');
        po->width--;
        po->returnsize++;
    }
    po->returnsize += ft_strlen(str);
    return (1);
}
