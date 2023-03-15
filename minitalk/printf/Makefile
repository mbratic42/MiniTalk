# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbratic <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 11:53:19 by mbratic           #+#    #+#              #
#    Updated: 2023/01/10 11:02:45 by mbratic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_printf.c ft_putnbr.c ft_putstr.c ft_puthex.c ft_putchar.c ft_unsigned_int.c ft_putptr.c

OBJECTS = ${SOURCES:.c=.o}

CFLAGS = -Wall -Werror -Wextra

all:
	cc $(CFLAGS) -c $(SOURCES)
	ar rcs $(NAME) $(OBJECTS)

$(NAME): all

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
