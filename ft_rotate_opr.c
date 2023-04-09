/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_opr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 01:25:52 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/09 02:02:31 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra (int *stack, t_data *data)
{
	int	i;

	i = 0;
	stack[0] = stack[data->size_a - 1];
	while (++i < data->size_a)
		stack[i] = stack[i + 1];
	write(1, "ra\n", 3);
}

void	ft_rb (int *stack, t_data *data)
{
	int	i;

	i = 0;
	stack[0] = stack[data->size_b - 1];
	while (++i < data->size_a)
		stack[i] = stack[i + 1];
	write(1, "rb\n", 3);
}

void	ft_rr (int *stack_a, int *stack_b, t_data *data)
{
	int	i;

	i = 0;
	stack_a[0] = stack_a[data->size_a - 1];
	while (++i < data->size_a)
		stack_a[i] = stack_b[i + 1];
	stack_b[0] = stack_b[data->size_a - 1];
	while (++i < data->size_a)
		stack_b[i] = stack_b[i + 1];
	write(1, "rr\n", 3);
}