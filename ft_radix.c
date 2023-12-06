/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:24:48 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/27 15:46:42 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_maxbit(t_data *data)
{
	int	max;

	data->max_bit = 0;
	max = data->size_a - 1;
	while (max > 0)
	{
		max /= 2;
		data->max_bit++;
	}
}

int	ft_find_index(t_data *data, int nbr)
{
	int	i;

	i = -1;
	while (++i < data->total_size)
		if (data->sorted[i] == nbr)
			return (i);
	return (0);
}

void	ft_radix(t_data *data)
{
	int	m;
	int	i;
	int	x;
	int	alen;

	i = 0;
	alen = data->size_a;
	while (i < data->max_bit)
	{
		x = 0;
		while (x++ < alen)
		{
			if ((ft_find_index(data, data->stack_a[0]) >> i & 1))
				ft_ra(data);
			else
				ft_pb(data);
		}
		while (data->size_b)
			ft_pa(data);
		i++;
	}
}
