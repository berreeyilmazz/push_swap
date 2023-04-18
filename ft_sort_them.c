/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_them.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:59:42 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/15 16:17:26 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_dealer (t_data *data)
{
	ft_find_maximum_bit(data);
	if (check_sorted(data) == 1)
		exit(1);
	if (data->total_size == 2)
		ft_sa (data);
	else if (data->total_size == 3)
		ft_three_args (data);
	else if (data->total_size == 5)
		ft_five_args (data);
	else if (data->total_size >= 6 || data->total_size == 4)
		ft_radix (data);
	ft_free (data);
}
