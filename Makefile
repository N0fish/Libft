# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: algultse <algultse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 16:46:39 by algultse          #+#    #+#              #
#    Updated: 2023/11/16 23:35:06 by algultse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
INCLUDE = libft.h
FLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCS = *.c

OBJS = *.o

all : $(NAME)

$(NAME) :
		$(CC) $(FLAGS) $(SRCS)
		$(AR) $(NAME) $(OBJS)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re