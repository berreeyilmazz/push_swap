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

void ft_ra (t_data *data)
{
	int	i;
	int	temp;
	if (data->size_a >= 2)
	{
		i = 0;
		temp = data->stack_a[0];
		while (i < data->size_a - 1)
		{
			data->stack_a[i] = data->stack_a[i + 1];
			i++;
		}
		data->stack_a[i] = temp;
		write(1, "ra\n", 3);
	}

}

void	ft_rb (t_data *data)
{
	int	i;
	int temp;
	if (data->size_b >= 2)
	{
		i = -1;
		temp = data->stack_b[0];
		while (++i < data->size_b - 1)
			data->stack_b[i] = data->stack_b[i + 1];
		data->stack_b[i] = temp;
		write(1, "rb\n", 3);
}
}

void	ft_rr ( t_data *data)
{
	int	i;
	int tempa;
	int	tempb;

	i = -1;
	tempa = data->stack_a[0];
	tempb = data->stack_b[0];
	while (++i < data->size_a - 1)
		data->stack_a[i] = data->stack_a[i + 1];
	data->stack_a[i] = tempa;
	i = -1;
	while (++i < data->size_b - 1)
		data->stack_b[i] = data->stack_b[i + 1];
	data->stack_b[i] = tempb;
	write(1, "rr\n", 3);
}