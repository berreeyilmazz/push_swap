/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fiveargs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:05:27 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/15 16:46:38 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int i = -1;
	while (++i < data->size_a)
		printf("stack_a %d  %d \n", i, data->stack_a[i]);
	int j = -1;
	while (++j < data->size_a)
		printf("sorted %d  %d \n", j, data->sorted[j]);

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


int	check_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->total_size)
	{
		if (data->stack_a[i] != i + 1)
			return (0);
		i++;
	}
	return (1);
}