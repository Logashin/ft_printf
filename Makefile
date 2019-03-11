NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

DIRO = obj

DIRS = src

HEADER = header

SRC = ft_printf.c \
	  ft_parse_format.c \
	  ft_print_type.c \
	  ft_print_int.c \

OBJ = *.o

FC = $(addprefix $(DIRS)/, $(SRC))

FO = $(addprefix $(DIRO)/, $(OBJ))

OBJPRINT = $(addprefix $(DIRO)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJPRINT)
	@make -C libft
	ar -rc $(NAME) $(FO)
	ranlib $(NAME)

$(DIRO)/%.o: $(DIRS)/%.c 
	@make -C libft
	@make copy -C libft
	@gcc $(FLAGS) -I $(HEADER) -o $@ -c $<

clean: 
	make clean -C libft
	rm -rf $(FO)
	rm -rf $(DIRO)

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re: fclean all
