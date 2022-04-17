# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orbiay <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 12:05:04 by orbiay            #+#    #+#              #
#    Updated: 2021/11/17 12:25:53 by orbiay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_memmove.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_striteri.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strmapi.c ft_calloc.c ft_strdup.c ft_strncmp.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_itoa.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJET = $(SRC:.c=.o)
NAME = libft.a 

all: $(NAME)
$(NAME): $(OBJET)
	ar rcs $(NAME) $(OBJET) 
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME) run
re : fclean all
