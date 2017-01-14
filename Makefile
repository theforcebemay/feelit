# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsemchuk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/11 16:58:53 by bsemchuk          #+#    #+#              #
#    Updated: 2017/01/14 16:11:08 by rhadiats         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = checker.o counter.o

FLAGS = -Wall -Wextra -Werror

NAME = fillit

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) 

checker.o: checker.c
	@gcc -c $(FLAGS) checker.o
