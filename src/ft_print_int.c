/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 13:02:44 by tmann             #+#    #+#             */
/*   Updated: 2019/03/12 21:35:39 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_int(t_print *po, va_list ap)
{
    char *str;
    long long int dec;
    int sizestr;
    
    dec = va_arg(ap, int);
    str = ft_itoa((int)dec);
    sizestr = (int)ft_strlen(str);
    if (po->accuracy == 0)
        ft_space_string_dec(str, po);
    else
        ft_print_accuracy_dec(str, po);
    return (1);
}


void        ft_check_space(char *str, t_print *po, int sizestr)
{
    if (po->space == 0 && str[0] != '-' && po->plus == 1 && po->width > sizestr + 1 && po->minus == 0)
        po->width--;
    if (po->space == 1 && str[0] != '-' && po->plus == 1 && po->width > sizestr + 1 && po->minus == 0)
        po->width--;
    if (po->space == 1 && str[0] != '-' && po->plus == 0 && po->width <= sizestr && po->minus == 0)
    {
        ft_putchar(' ');
        po->returnsize++;
        po->width--;
    }
    if (str[0] != '+' && str[0] != '-' && po->plus == 1 && po->width < sizestr)
    {
        ft_putchar('+');
        po->returnsize++;
        po->plus = 0;
        po->width--;
    }
    if (*str != '-' && po->plus == 1 && po->width > sizestr && po->zero == 1)
    {
        ft_putchar('+');
        po->plus = 0;
        po->returnsize++;
    }
    
}

void        ft_space_string_dec(char *str, t_print *po)
{
    int sizestr;

    sizestr = (int)ft_strlen(str);
    po->returnsize += sizestr;
    if(po->plus == 1 || po->space == 1)
        ft_check_space(str, po, sizestr);
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
    if(po->plus == 1 && str[0] != '-' && str[0 - 1] != '-')
    {
        ft_putchar('+');
        po->returnsize++;
        if (po->width > sizestr)
            po->width--;
    }
        ft_putstr((char*)str);
        while (po->width > sizestr && po->minus == 1)
        {
            ft_putchar(' ');
            po->width--;
            po->returnsize++;
        }
}

void        ft_print_accuracy_dec(char *str, t_print *po)
{
    int sizestr;
    int saveacc;
    
    saveacc = po->accuracy;
    sizestr = (int)ft_strlen(str);
    if (po->accuracy < sizestr)
    {
        ft_space_string_dec(str, po);
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
    if (po->space == 1 && po->plus == 0 && *str != '-' && str[0 - 1] != '-' && po->width - sizestr <= po->accuracy)
    {
        ft_putchar(' ');
        po->returnsize++;
    }
    if (po->plus == 1 && po->accuracy >= po->width && *str != '-' && str[0 - 1] != '-')
    {
        ft_putchar('+');
        po->returnsize++;
    }
//    if (*str == '-' && po->accuracy > po->width)
//    {
//        ft_putchar('-');
//        str++;
//    }
    if (po->width > po->accuracy)
        ft_space_accuracy_dec(str, po, sizestr);
    while (po->accuracy > 0)
    {
        ft_putchar('0');
        po->accuracy--;
        po->returnsize++;
    }
    ft_putstr(str);
    while (po->width > 0 && po->minus == 1 && po->width > saveacc)
    {
        ft_putchar(' ');
        po->returnsize++;
        po->width--;
    }
    po->returnsize += sizestr;
}

void        ft_space_accuracy_dec(char *str, t_print *po, int sizestr)
{
    if (po->plus == 1 && *str != '-' && str[0 - 1] != '-' && po->width > po->accuracy)
    {
        po->width--;
    }
    po->accuracy += sizestr;
    po->width -= po->accuracy;
    while (0 < po->width && po->minus == 0)
    {
        ft_putchar(' ');
        po->returnsize++;
        po->width--;
    }
    if (*str == '-' || str[0 - 1] == '-')
    {
        ft_putchar('-');
    }
    if (po->plus == 1 && *str != '-' && str[0 - 1] != '-')
    {
        ft_putchar('+');
        po->returnsize++;
    }
    po->accuracy -= sizestr;
}