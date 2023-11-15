# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: algultse <algultse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 16:46:39 by algultse          #+#    #+#              #
#    Updated: 2023/11/15 12:37:19 by algultse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
INCLUDE = libft.h
FLAGS = -Wall -Wextra -Werror
AR = ar rs

SRCS = *.c

OBJS = *.o

all : $(NAME)

$(NAME) :
		$(CC) $(FLAGS) $(SRCS)
		$(AR) $(NAME) $(OBJS)
		ranlib $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re