# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crossart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 13:39:59 by crossart          #+#    #+#              #
#    Updated: 2020/11/12 15:20:18 by crossart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

SRC = ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlen.c\
	  ft_atoi.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strlcpy.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_calloc.c\
	  ft_strncmp.c\
	  ft_strlcat.c\
	  ft_strdup.c\
	  ft_strnstr.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_strmapi.c\
	  ft_putnbr_fd.c\
	  ft_strtrim.c\
	  ft_split.c\
	  ft_itoa.c

OBJ = $(SRC:.c=.o)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC);
	ar rc $(NAME) $(OBJ);
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
