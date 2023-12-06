/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_dealer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 02:13:05 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/24 14:34:23 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_onlystr(t_data *data, char *av)
{
	char		*buf;
	static int	i;

	i = 0;
	buf = ft_strjoin(data->str, av);
	while (buf[i++])
		data->str[i] = buf[i];
	free(buf);
}

int	ft_count_them(char *str)
{
	int	i;
	int	rtrn;

	i = 0;
	rtrn = 0;
	while (str[i + 1])
	{
		if ((str[i] >= 48 && str[i] <= 57) && str[i + 1] == ' ')
			rtrn++;
		i++;
	}
	if (str[i] >= 48 && str[i] <= 57)
		rtrn++;
	return (rtrn);
}

int	ft_ctrl_hexa(t_data *data)
{
	int	i;

	i = 1;
	while (data->str[i + 1])
	{
		if (data->str[i - 1] == ' ' && data->str[i] == 48
			&& (data->str[i + 1] >= 48
				&& data->str[i + 1] <= 57))
			ft_error(data);
		i++;
	}
	return (1);
}

int	ft_my_atoi(char *str, t_data *data)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + str[i] - 48;
		i++;
		if (result * sign > 2147483647)
			ft_error(data);
		else if (result * sign < -2147483648)
			ft_error(data);
	}
	return (result * sign);
}

void	ft_initialize_stack_a(t_data *data)
{
	int		i;
	char	**cut;

	i = 0;
	cut = ft_split(data->str, ' ');
	data->stack_a = malloc(sizeof(int) * data->total_size);
	data->stack_b = malloc(sizeof(int) * data->total_size - 2);
	data->sorted = malloc(sizeof(int) * data->total_size);
	while (i < data->total_size)
	{
		data->stack_a[i] = ft_my_atoi(cut[i], data);
		free (cut[i]);
		data->sorted[i] = data->stack_a[i];
		i++;
	}
	free (cut);
	data->size_a = data->total_size;
	ft_bubble_sort(data);
}
