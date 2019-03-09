#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "/Users/tmann/Desktop/xcode/print/print/libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct      s_print
{
    size_t returnsize;
}                     t_print;

int ft_printf( const char *format, ... );

#endif
