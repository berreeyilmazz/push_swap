/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:24:48 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/15 16:50:00 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_find_maximum_bit(t_data *data)
{
	int	max;

	data->max_bit = 0;
	max = data->size_a - 1;
	while (max > 0)
	{
		data->max_bit++;
		max /= 2;
	}
}

int	find_index(t_data *data, int nbr)
{
	int	i;

	i = 0;
	while (i < data->total_size)
	{
		if (data->sorted[i] == nbr)
			return (i);
		i++;
	}
	return (0);
}

void	ft_radix(t_data *data)
{
	int	i;
	int	x;
	int	alen;
	i = 0;
	alen = data->size_a;
	while (i < data->max_bit)
	{
		x = 0;
		while (x < alen)
		{
			if ((find_index(data, data->stack_a[0]) >> i & 1))
				ft_ra(data);
			else
				ft_pb(data);
			x++;
		}
		while (data->size_b)
			ft_pa(data);
		i++;
	}
}
/*for (int i = 0; i < data->size_a; i++)
	{
		printf("[  %d] ", data->stack_a[i]);
	}*/
