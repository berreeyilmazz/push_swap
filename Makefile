# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 01:54:21 by havyilma          #+#    #+#              #
#    Updated: 2023/04/09 01:58:16 by havyilma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = check_at_the_beginning.c ft_atoi_dealer.c ft_bubble_and_index.c ft_fiveargs.c ft_free.c \
		ft_libft.c ft_push_opr.c ft_r_rotate_opr.c ft_radix.c ft_rotate_opr.c ft_sort_them.c ft_split.c \
		ft_swap_opr.c push_swap.c

OBJECTS = $(SRCS:.c=.o)
CC = cc
NAME = push_swap
FLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY = all clean fclean re

