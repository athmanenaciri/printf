# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 00:06:07 by anaciri           #+#    #+#              #
#    Updated: 2021/12/15 18:31:19 by anaciri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 

SRC = ft_print_char.c ft_print_nbr.c ft_print_str.c ft_print_adr.c ft_print_hexa.c
LIB = printf.h
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ) $(LIB)
	ar rc $(NAME) $(OBJ)

%.o : %.c
	cc -c $< -o $@ $(CFLAGS)
	
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
