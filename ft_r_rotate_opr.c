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

void	ft_rra (t_data *data)
{
	int	i;
	int	temp;

	i = data->size_a;
	temp = data->stack_a[data->size_a - 1];
	data->stack_a[data->size_a - 1] = data->stack_a[0];
	while (--i > 0)
		data->stack_a[i] = data->stack_a[i - 1];
	data->stack_a[i] = temp;
	write (1, "rra\n", 4);
}

void	ft_rrb (t_data *data)
{
	int	i;
	int	temp;

	i = data->size_b;
	temp = data->stack_b[data->size_b - 1];
	data->stack_b[data->size_b - 1] = data->stack_b[0];
	while (--i > 0)
		data->stack_b[i] = data->stack_b[i - 1];
	data->stack_b[i] = temp;
	write (1, "rrb\n", 4);
}

void	ft_rrr(t_data *data)
{
	int	i;
	int	tempa;
	int	tempb;

	i = data->size_a;
	tempa = data->stack_a[data->size_a - 1];
	data->stack_b[data->size_a - 1] = data->stack_a[0];
	while (--i > 0)
		data->stack_a[i] = data->stack_a[i - 1];
	data->stack_a[i] = tempa;
	i = data->size_b;
	tempb = data->stack_b[data->size_b - 1];
	data->stack_b[data->size_b - 1] = data->stack_b[0];
	while (--i > 0)
		data->stack_b[i] = data->stack_b[i - 1];
	data->stack_b[i] = tempb;
	write (1, "rrr\n", 4);
}