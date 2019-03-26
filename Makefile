NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

DIRO = obj

DIRS = src

HEADER = header

SRC = ft_printf.c \
	ft_struct.c \
	ft_parse_format.c \
	ft_print_str_char_pr.c \
	ft_print_int.c \
	ft_help_norm_for_d.c \
	ft_mod_lenght.c \
	ft_mod_lenght_2.c \
	ft_print_u.c \
	ft_print_o_p.c \
	ft_space_for_x.c \
	ft_print_x.c \
	ft_print_float.c \
	ft_float_accuracy.c \
	ft_float_roun.c \

OBJ = *.o

FC = $(addprefix $(DIRS)/, $(SRC))

FO = $(addprefix $(DIRO)/, $(OBJ))

OBJPRINT = $(addprefix $(DIRO)/, $(SRC:.c=.o))

all: lib $(NAME)

lib:
	make -C libft
	make copy -C libft

$(NAME): $(OBJPRINT)
	ar -rc $(NAME) $(FO)
	ranlib $(NAME)

$(DIRO)/%.o: $(DIRS)/%.c 
	@gcc $(FLAGS) -I $(HEADER) -o $@ -c $<

clean: 
	make clean -C libft
	rm -rf $(FO)
	rm -rf $(DIRO)

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re: fclean all
