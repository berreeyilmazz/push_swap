/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_dealer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 02:13:05 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/15 16:43:17 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_onlystr(t_data *data, char *av)
{
	char		*buf;
	static int	i;

	i = 0;
	buf = ft_strjoin (data->str, av);
	while (buf[i++])
		data->str[i] = buf[i];
	free (buf);
}

void	ft_initialize_stack_a(t_data *data)
{
	int		i;
	char	**cut;

	i = 0;
	cut = ft_split (data->str, ' ');
	data->stack_a = malloc(sizeof(int) * data->total_size);
	data->stack_b = malloc(sizeof(int) * data->total_size - 2);
	data->sorted = malloc(sizeof(int) * data->total_size);

	
	while (i < data->total_size)
	{
		data->stack_a[i] = ft_atoi(cut[i]);
		data->sorted[i] = data->stack_a[i];
		i++;
	}
	data->size_a = data->total_size;
	ft_bubble_sort (data);
}
