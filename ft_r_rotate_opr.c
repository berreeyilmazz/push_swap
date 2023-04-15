/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_rotate_opr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 01:37:09 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/15 15:59:46 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra (int *stack, t_data *data)
{
	int	i;

	i = -1;
	stack[data->size_a - 1] = stack[0] ;
	while (++i < data->size_a - 1)
		stack[i] = stack[i + 1];
	write (1, "rra\n", 4);
}

void	ft_rrb (int *stack, t_data *data)
{
	int	i;

	i = -1;
	stack[data->size_a - 1] = stack[0] ;
	while (++i < data->size_a - 1)
		stack[i] = stack[i + 1];
	write (1, "rrb\n", 4);
}

void	ft_rrr(int	*stack_a, int *stack_b, t_data *data)
{
	int	i;

	i = -1;
	stack_b[data->size_a - 1] = stack_a[0];
	while (++i < data->size_a - 1)
		stack_a[i] = stack_a[i + 1];
	i = -1;
	stack_b[data->size_a - 1] = stack_b[0] ;
	while (++i < data->size_a - 1)
		stack_b[i] = stack_b[i + 1];
	write (1, "rrr\n", 4);
}