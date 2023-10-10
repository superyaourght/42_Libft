# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmastrog <mmastrog@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 22:02:49 by mmastrog          #+#    #+#              #
#    Updated: 2023/05/27 14:11:46 by mmastrog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HED = libft.h

CC = gcc 

CFLAGS = -Wall -Wextra -Werror -c

SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_toupper.c ft_tolower.c ft_atoi.c \
	ft_bzero.c ft_memset.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_split.c

OBJ = $(SRC:.c=.o)

RM = rm -f

PLIB = ar rc

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) 
	$(PLIB) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
