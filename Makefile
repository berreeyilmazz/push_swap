# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 01:54:21 by havyilma          #+#    #+#              #
#    Updated: 2023/04/24 14:29:40 by havyilma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = check_at_the_beginning.c ft_atoi_dealer.c ft_bubble_and_sortdealer.c ft_fiveargs.c \
		ft_libft.c ft_push_opr.c ft_r_rotate_opr.c ft_radix.c ft_rotate_opr.c ft_split.c \
		ft_swap_opr.c push_swap.c ft_error_and_free.c

OBJECTS = $(SRCS:.c=.o)

NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra

$(NAME):		$(OBJECTS)
				$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

all:			$(NAME)

clean:
		rm -rf $(OBJECTS)

fclean:	clean
		rm -rf ${NAME}

re: fclean all

.PHONY = all clean fclean re
