# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 10:22:15 by ssi-moha          #+#    #+#              #
#    Updated: 2018/01/28 16:23:24 by ssi-moha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

PUSH = push_swap

LIB = libft/libft.a

INCLUDE = push_swap.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra

MAIN = checker.c

MAIN2 = push_swap.c

SRC_CHECK = check_limit.c get_next_line.c mv_elem.c new_elem.c check_arg.c\
	  new_stack.c push_stack.c reverse_rotate_stack.c stack_arg.c check_dup.c\
	  check_stack.c free_stack.c op_stack.c rotate_stack.c index_values.c\
	  swap_stack.c stack_len.c free_tab.c error_mess.c checker.c

SRC_PUSH = push_swap.c stack_arg.c check_arg.c index_values.c push_stack.c\
		   new_stack.c new_elem.c mv_elem.c check_limit.c check_dup.c\
		   rotate_stack.c swap_stack.c reverse_rotate_stack.c is_sort.c\
		   init_struct.c bigger_med.c max_index.c last_elem.c next_up.c\
		   tri_sort.c tri_five.c empty_a.c fill_median.c search_inb.c\
		   push_val.c part_case.c free_tab.c free_stack.c stack_len.c\
		   free_push.c error_mess.c

OBJ_CHECK = $(SRC_CHECK:.c=.o)

OBJ_PUSH = $(SRC_PUSH:.c=.o)

all:	$(NAME) $(PUSH)

$(NAME): $(OBJ_CHECK)
	make -C ./libft
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ_CHECK) $(LIB)

$(PUSH): $(OBJ_PUSH)
	make -C ./libft
	$(CC) $(CFLAGS) -o $(PUSH) $(OBJ_PUSH) $(LIB)

clean:
	rm -rf $(OBJ_PUSH) $(OBJ_CHECK)
	make clean -C ./libft

fclean: clean
	rm -rf $(NAME) $(PUSH)
	make fclean -C ./libft

re: fclean all
