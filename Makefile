NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

DIRO = obj

DIRS = src

HEADER = header

SRC = ft_printf.c \

OBJ = *.o

FC = $(addprefix $(DIRS)/, $(SRC))

FO = $(addprefix $(DIRO)/, $(OBJ))

OBJPRINT = $(addprefix $(DIRO)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJPRINT)
	make -C libft
	make copy -C libft
	ar -rc $(NAME) $(FO)
	ranlib $(NAME)

$(DIRO)/%.o: $(DIRS)/%.c
	make copy -C libft
	gcc $(FLAGS) -I $(HEADER) -o $(OBJPRINT) -c $(FC)

clean: 
	make clean -C libft
	rm -rf $(FO)
	rm -rf $(DIRO)

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re: fclean all
