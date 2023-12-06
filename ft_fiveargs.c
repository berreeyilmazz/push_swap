/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fiveargs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:05:27 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/24 13:38:44 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->total_size - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_three_args(t_data *data)
{
	if ((data->stack_a[0] > data->stack_a[2])
		&& (data->stack_a[2] > data->stack_a[1]))
	{
		ft_rra(data);
		ft_rra(data);
	}
	else if ((data->stack_a[1] > data->stack_a[2])
		&& (data->stack_a[2] > data->stack_a[0]))
	{
		ft_rra(data);
		ft_sa(data);
	}
	else if ((data->stack_a[1] > data->stack_a[0])
		&& (data->stack_a[0] > data->stack_a[2]))
		ft_rra(data);
	else if ((data->stack_a[2] > data->stack_a[0])
		&& (data->stack_a[0] > data->stack_a[1]))
		ft_sa(data);
	else if ((data->stack_a[0] > data->stack_a[1])
		&& (data->stack_a[1] > data->stack_a[2]))
	{
		ft_ra(data);
		ft_sa(data);
	}
}

void	ft_five_args(t_data *data)
{
	while (data->sorted[2] <= data->stack_a[0])
		ft_ra(data);
	if (data->sorted[2] > data->stack_a[0])
		ft_pb(data);
	while (data->sorted[2] <= data->stack_a[0])
		ft_ra(data);
	if (data->sorted[2] > data->stack_a[0])
		ft_pb(data);
	ft_three_args(data);
	if (data->stack_b[1] > data->stack_b[0])
		ft_sb(data);
	ft_pa(data);
	ft_pa(data);
}
