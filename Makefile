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

SRCS =	*.c

NAME = push_swap


$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

all:
	$(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all

.PHONY:  all clean fclean re