# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsailine <zsailine@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 10:49:55 by zsailine          #+#    #+#              #
#    Updated: 2024/03/13 10:49:56 by zsailine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printchar.c \
	ft_printstr.c \
	ft_printhexa.c \
	ft_printheXa.c \
	ft_printnbr.c \
	ft_print_u_nbr.c \
	ft_print_ptr.c \
	ft_printf.c

CC = cc

OBJ = $(SRC:.c=.o)

CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -r $@ $(OBJ)

%.o: %.c
	$(CC) -c $(CFLAGS) $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all clean
