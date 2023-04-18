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

int	ft_count_them (char *str)
{
	int	i;
	int	rtrn;

	i = 0;
	rtrn = 0;
	while(str[i + 1])
	{
		if ((str[i] >= 48 && str[i] <= 57) && str[i + 1] == ' ')
			rtrn++;
		i++;
	}
	if(str[i] >= 48 && str[i] <= 57)
		rtrn++;
	return (rtrn);
}

int	ft_ctrl_hexa (t_data *data)
{
	int	i;

	i = -1;
	while (data->str[++i])
	{
		if (data->str[i] == 48 && (data->str[i + 1] >= 48 && data->str[i + 1] <= 57))
		{
			write(1, "Error!\n", 7);
			exit(0);
		}
	}
	return (1);
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
		if ((data->stack_a[i] < -2147483648 && data->stack_a[i] > 2147483647))
		{
			ft_free (data);
			write(1, "Error!\n", 7);
			exit(0);
		}
		i++;
	}
	data->size_a = data->total_size;
	ft_bubble_sort (data);
}
