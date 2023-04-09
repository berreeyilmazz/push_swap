/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_and_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:44:17 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/09 02:46:08 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bubble_sort (t_data *data)
{
	int	temp;
	int	i;
	int j;

	i = 0;

	while (i < data->total_size)
	{
		j= 0;
		while (j < data->total_size)
		{
			if (data->sorted[j] > data->sorted[j + 1])
			{
				temp = data->sorted[j];
				data->sorted[j] = data->sorted[j + 1];
				data->sorted[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	ft_put_index (data);

}

void	ft_put_index (t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->total_size)
	{
		j = 0;
		while (j < data->total_size + 1)
		{
			if (data->stack_a[i] == data->sorted[j])
				data->stack_a[i] = j;
			j++;
		}
		i++;
	}
}