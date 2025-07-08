# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: algultse <algultse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 16:46:39 by algultse          #+#    #+#              #
#    Updated: 2023/11/18 00:19:45 by algultse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SONAME = libft.so

CC = cc -c
INCLUDE = libft.h
FLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC = ft_atoi.c ft_bzero.c ft_isascii.c ft_isalnum.c ft_calloc.c \
		ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c ft_memcmp.c ft_substr.c ft_strjoin.c \
		ft_split.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = *.o

all : $(NAME) $(SONAME)

$(NAME) :
		$(CC) $(FLAGS) $(SRC)
		$(AR) $(NAME) $(OBJS)

$(SONAME) :
		$(CC) $(FLAGS) $(SRC)
		$(AR) $(NAME) $(OBJS)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -rf $(NAME) $(SONAME)

re : fclean all

so:
	gcc -nostartfiles -fPIC $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re