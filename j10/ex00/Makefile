# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboste <nboste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 11:13:13 by nboste            #+#    #+#              #
#    Updated: 2016/09/13 19:31:15 by nboste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putstr.c \
	  srcs/ft_swap.c \
	  srcs/ft_putchar.c \
	  srcs/ft_strlen.c \
	  srcs/ft_strcmp.c

OBJ = ft_putstr.o \
	  ft_swap.o \
	  ft_putchar.o \
	  ft_strlen.o \
	  ft_strcmp.o

NAME = libft.a

all: $(NAME) 

$(NAME):
	gcc -c $(SRC) -I ./includes
	ar rcs $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
