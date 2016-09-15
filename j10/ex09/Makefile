# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboste <nboste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 11:13:13 by nboste            #+#    #+#              #
#    Updated: 2016/09/12 17:20:02 by nboste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_calc.c \
	  ft_op.c \
	  ft_str.c \
	  main.c

OBJ = ft_calc.o \
	  ft_op.o \
	  ft_str.o \
	  main.o

NAME = ft_advanced_do-op

all: $(NAME) 

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
