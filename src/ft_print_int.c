#include "ft_printf.h"

int ft_print_int(t_print *po, va_list ap)
{
    int decimal;
    if(po)
    decimal = va_arg(ap, int);
    ft_putnbr(decimal);
    return (1);
}
