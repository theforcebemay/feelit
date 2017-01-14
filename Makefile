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

OBJS =	check_last_newline.o \
		check_rows.o \
		check_tetriminos.o \
		error_message_no_newline.o \
		validator.o \
		check_lines.o \
		check_symb.o

FLAGS = -Wall -Wextra -Werror

NAME = fillit

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) 

check_last_newline.o: check_last_newline.c
	@gcc -c $(FLAGS) check_last_newline.c

check_rows.o: check_rows.c
	@gcc -c $(FLAGS) check_rows.c

check_tetriminos.o: check_tetriminos.c
	@gcc -c $(FLAGS) check_tetriminos.c

error_message_no_newline.o: error_message_no_newline.c
	@gcc -c $(FLAGS) error_message_no_newline.c

validator.o: validator.c
	@gcc -c $(FLAGS) validator.c

check_lines.o: check_lines.c
	@gcc -c $(FLAGS) check_lines.c

check_symb.o: check_symb.c
	@gcc -c $(FLAGS) check_symb.c

clean:
	rm $(OBJS)
