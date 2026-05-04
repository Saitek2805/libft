# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khurtado <khurtado@student.42urduliz.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/24 12:49:14 by khurtado          #+#    #+#              #
#    Updated: 2026/05/04 12:12:23 by khurtado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_tolower.c \
	ft_calloc.c ft_isprint.c ft_memset.c ft_strlen.c ft_toupper.c \
	ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_isalpha.c \
	ft_memcmp.c ft_strdup.c ft_strnstr.c ft_isascii.c ft_memcpy.c \
	ft_strlcat.c ft_strrchr.c ft_substr.c ft_strjoin.c ft_strtrim.c \


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
