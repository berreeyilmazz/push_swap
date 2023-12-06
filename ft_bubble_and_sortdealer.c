/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_and_sortdealer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:44:17 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/27 16:00:17 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bubble_sort(t_data *data)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < data->size_a - 1)
	{
		j = 0;
		while (j < data->size_a - 1)
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
}

void	ft_sort_dealer(t_data *data)
{
	if (check_sorted(data) == 1)
		exit(0);
	if (data->total_size == 2)
		ft_sa(data);
	else if (data->total_size == 3)
		ft_three_args(data);
	else if (data->total_size == 5)
		ft_five_args(data);
	else if (data->total_size >= 6 || data->total_size == 4)
		ft_radix(data);
	ft_free(data);
}
