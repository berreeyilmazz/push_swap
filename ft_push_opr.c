/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_opr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:31:50 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/09 01:46:28 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_pa (int *stack_a, int *stack_b, t_data *data)
{
	int	i;

	i = 0;
	stack_a[0] = stack_b[0];
	while (++i < data->size_a + 1)
		stack_a[i] = stack_a[i + 1];
	i = -1;
	while (++i < data->size_b - 1)
		stack_b[i] = stack_b[i + 1];
	data->size_a++;
	data->size_b--;
	write (1, "pa\n", 3);
}

void ft_pb (int *stack_a, int *stack_b, t_data *data)
{
	int	i;

	i = 0;
	stack_b[0] = stack_a[0];
	while (++i < data->size_b + 1)
		stack_b[i] = stack_b[i + 1];
	i = -1;
	while (++i < data->size_a - 1)
		stack_a[i] = stack_a[i + 1];
	data->size_b++;
	data->size_a--;
	write (1, "pb\n", 3);
}