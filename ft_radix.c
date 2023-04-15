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

int	ft_find_maximum_bit (t_data *data)
{
	int	maximum;
	int	rtrn;

	rtrn = 0;
	maximum = data->size_a;
	while (maximum >= 1)
	{
		rtrn++;
		maximum /= 2;
	}
		printf ("   %d   %d\n", maximum, rtrn);
	return (rtrn);
}

void	ft_radix (t_data *data)
{
	int	max;
	int	indx;
	int	i;

	max = ft_find_maximum_bit (data);
	indx = 0;
	while (indx < max)
	{
		if (check_sorted (data) == 1)
			return;

		i = 0;
		while (i < data->size_a)
		{
			if (data->stack_a[0] >> i & 1)
				ft_ra (data->stack_a, data);
			else
				ft_pb(data->stack_a, data->stack_b, data);
		}
		i = 0;
		while (i < data->size_b)
			ft_pa (data->stack_a, data->stack_b, data);
		indx++;
	}
}