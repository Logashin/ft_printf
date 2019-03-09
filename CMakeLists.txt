#cmake_minimum_required(VERSION 3.13)
#project(print C)
#
#set(CMAKE_C_STANDARD 99)
#
#add_library(print main.c ft_printf.c ft_printf.h libft/libft.h)

cmake_minimum_required(VERSION 3.13)
project(print C)

set(CMAKE_C_STANDARD 99)

file(GLOB C libft/*.c *.c libft/libft.h)

add_executable(print ${C} ft_printf.c main.c ft_parse_format.c ft_print_type.c ft_print_int.c)
