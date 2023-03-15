# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbratic <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 16:11:43 by mbratic           #+#    #+#              #
#    Updated: 2022/10/28 15:35:01 by mbratic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SOURCES = ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_strnstr.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strjoin.c \
	  ft_strmapi.c \
	  ft_strtrim.c \
	  ft_striteri.c \
	  ft_itoa.c ft_split.c
SOURCEB = ft_lstnew.c \
	  ft_lstadd_front.c \
	  ft_lstsize.c \
	  ft_lstlast.c \
	  ft_lstadd_back.c \

OBJECTS = ${SOURCES:.c=.o}

OBJECTB = ${SOURCEB:.c=.o}

CFLAGS = -Wall -Wextra -Werror

CC = cc

all:
	cc $(CFLAGS) -c $(SOURCES)
	ar rcs $(NAME) $(OBJECTS)

$(NAME): all

bonus:
	cc -c $(SOURCEB)
	ar rcs $(NAME) $(OBJECTB)

clean:
	rm -f $(OBJECTS) $(OBJECTB)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES) $(SOURCEB)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS) $(OBJECTB)
