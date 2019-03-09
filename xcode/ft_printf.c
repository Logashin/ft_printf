 #include "/Users/tmann/Desktop/xcode/print/print/ft_printf.h"

int ft_printf( const char *format, ...)
{
    va_list ap;
    t_print po;
    int i;
    char *str;
    va_start(ap, format);
    
    po.returnsize = 0;
    i = 0;
    while (format[i])
    {
        if (format[i] != '%' && format[i] != 's')
        {
            ft_putchar(format[i]);
            po.returnsize++;
        }
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            if (format[i + 1] == 's')
            {
                str = va_arg(ap, char*);
                ft_putstr(str);
                po.returnsize += ft_strlen(str);
            }
        }
        i++;
    }
    va_end(ap);
    return ((int)po.returnsize);
}

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

