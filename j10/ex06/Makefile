# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboste <nboste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 11:13:13 by nboste            #+#    #+#              #
#    Updated: 2016/09/13 19:58:09 by nboste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c \
	  ft_calc.c \
	  ft_op.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  main.c

OBJ = ft_atoi.o \
	  ft_calc.o \
	  ft_op.o \
	  ft_putnbr.o \
	  ft_putstr.o \
	  main.o

NAME = do-op

all: $(NAME) 

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

