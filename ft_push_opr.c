/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_opr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:31:50 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/18 19:19:47 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*decrease_indice(int *arr, int size)
{
	int	i;

	i = size - 1;
	while (i)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	return (arr);
}

int	*increase_indice(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	return (arr);
}

void	ft_pa(t_data *data)
{
	if (data->size_b > 0)
	{
		data->size_a++;
		data->size_b--;
		data->stack_a = decrease_indice(data->stack_a, data->size_a);
		data->stack_a[0] = data->stack_b[0];
		data->stack_b = increase_indice(data->stack_b, data->size_b);
		write(1, "pa\n", 3);
	}
}

void	ft_pb(t_data *data)
{
	if (data->size_a > 0)
	{
		data->size_b++;
		data->size_a--;
		data->stack_b = decrease_indice(data->stack_b, data->size_b);
		data->stack_b[0] = data->stack_a[0];
		data->stack_a = increase_indice(data->stack_a, data->size_a);
		write(1, "pb\n", 3);
	}
}
