#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct		s_print
{
    int				check;
    int				i;
    int				returnsize;
    int				plus;
    int				minus;
    int				space;
    int				zero;
    int				sharp;
    int				width;
    int				accuracy;
    char            length;
}					t_print;

int					ft_printf( const char *format, ... );
int		            ft_check_valid_param(char *str, int i);
t_print				*ft_struct_creat(t_print *po);
void				ft_clear_struct(t_print *po);
void				ft_parse_format(char *format, t_print *po, va_list ap);
void				ft_param(char *format, t_print *po, va_list ap);
void				ft_flags(char *format, t_print *po);
void				ft_width_param(char *format, t_print *po);
void				ft_accuracy(char *format, t_print *po);
void				ft_mod_length(char *format, t_print *po);
int					ft_type(char *format, t_print *po, va_list ap);
int					ft_print_procent(char *format, t_print *po);
int					ft_print_char(t_print *po, va_list ap);
int					ft_print_string(t_print *po, va_list ap);
void				ft_space_string(char *str, t_print *po);
char                *ft_accuracy_string(char *str, t_print *po, int sizestr);
int					ft_print_int(t_print *po, va_list ap);
void		        ft_space_string_dec(char *str, t_print *po);
void		        ft_check_space_int(char *str, t_print *po, int sizestr);
void                ft_print_accuracy_dec(char *str, t_print *po);
void                ft_space_accuracy_dec(char *str, t_print *po, int sizestr);

#endif
