
#include "/Users/tmann/Desktop/xcode/print/print/ft_printf.h"
#include <stdio.h>

int main(void)
{
    ft_putnbr(ft_printf("hello%s%s", "ww", "kostya"));
    write(1, "\n", 1);
    printf("%.12f\n", 2.718281828);
    write(1, "\n", 1);
    return (0);
}
