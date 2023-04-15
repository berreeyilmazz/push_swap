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

int	ft_find_max(t_data *data, char a_or_b)
{
	int	ctrl;
	int	i;

	i = -1;
	if (a_or_b == 'a')
	{
		ctrl = data->stack_a[0];
		while (++i < data->size_a)
		{
			if (ctrl < data->stack_a[i])
				ctrl = data->stack_a[i];
		}
	}
	else
	{
		ctrl = data->stack_b[0];
		while (++i < data->size_b)
		{
			if (ctrl < data->stack_b[i])
				ctrl = data->stack_b[i];
		}
	}
	return (ctrl);
}

int	ft_find_min(t_data *data, char a_or_b)
{
	int	ctrl;
	int	i;

	i = -1;
	ctrl = 0;
	if (a_or_b == 'a')
	{
		ctrl = data->stack_a[0];
		while (++i > data->size_a)
		{
			if (ctrl > data->stack_a[i])
				ctrl = data->stack_a[i];
		}
	}
	else
	{
		ctrl = data->stack_b[0];
		while (++i < data->size_b)
		{
			if (ctrl > data->stack_b[i])
				ctrl = data->stack_b[i];
		}
	}
	return (ctrl);
}

void	ft_three_args(t_data *data)
{
	if (check_sorted(data) == 0)
		return;
	if (data->stack_a[0] == ft_find_min(data, 'a'))
	{
		ft_sa (data->stack_a);
		ft_rra (data->stack_a, data);
	}
	else if (data->stack_a[0] == ft_find_max(data, 'a'))
	{
		if (data->stack_a[1] > data->stack_a[2])
		{
			ft_sa (data->stack_a);
			ft_ra (data->stack_a, data);
		}
		else
			ft_rra (data->stack_a, data);
	}
	else
	{
		if (data->stack_a[1] > data->stack_a[2])
			ft_ra (data->stack_a, data);
		else
			ft_sa (data->stack_a);
	}
}

void	ft_five_args(t_data *data)
{
	if (check_sorted(data) == 0)
		return;
	while (data->stack_a[0] <= 3)
		ft_ra (data->stack_a, data);
	if (data->stack_a[0] > 3)
		ft_pb (data->stack_a, data->stack_b, data);
	while (data->stack_a[0] <= 3)
		ft_ra (data->stack_a, data);
	if (data->stack_a[0] > 3)
		ft_pb (data->stack_a, data->stack_b, data);
	ft_three_args (data);
	if (data->stack_b[0] < data->stack_b[1])
		ft_sa (data->stack_a);
	ft_pa (data->stack_a, data->stack_b, data);
	ft_pa (data->stack_a, data->stack_b, data);
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