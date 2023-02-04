/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:58:57 by havyilma          #+#    #+#             */
/*   Updated: 2023/02/04 18:34:58 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
	int		size;
	int 	*array;
	char	type;
}	t_stack;
int 	ft_argv_check(char **av, int indx);
int		ft_atoi(char *av);
int		ft_strlen(char *str);
char	*ft_strjoin(char *p1, char *p2, int start, int size);
void	ft_build(t_stack *stack_a, t_stack *stack_b, char *str);
int		*ft_array(char **av);
char	*ft_flawless_return(char **av, int i, int k);
char	*ft_flat(char **av, int i, int k);







#endif
