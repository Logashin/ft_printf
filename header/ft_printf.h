#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct      s_print
{
    int             check;
    int             i;
    int             returnsize;
    int             plus;
    int             minus;
    int             space;
    int             zero;
    int             sharp;
    int             width;
    int             accuracy;
    char            *length;
}                   t_print;

int ft_printf( const char *format, ... );
t_print    *ft_struct_print(t_print *po);
void ft_clear_struct(t_print *po);
void    ft_parse_format(char *format, t_print *po, va_list ap);
void        ft_param(char *format, t_print *po, va_list ap);
void       ft_flags(char *format, t_print *po);
void    ft_width_param(char *format, t_print *po);
void     ft_accuracy(char *format, t_print *po);
void     ft_mod_length(char *format, t_print *po);
int         ft_type(char *format, t_print *po, va_list ap);
int ft_print_procent(char *format, t_print *po);
int ft_print_char(t_print *po, va_list ap);
int ft_print_string(t_print *po, va_list ap);
int ft_print_int(t_print *po, va_list ap);

#endif
