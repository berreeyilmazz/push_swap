/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_at_the_beginning.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:33:33 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/27 16:16:40 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_all(char **av, t_data *data)
{
	if (ft_check_av(av, 0, -1, data) == 0)
		ft_error (data);
	return (1);
}

int	ft_check_av(char **av, int i, int j, t_data *data)
{
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (!((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == ' '
					|| av[i][j] == '+' || av[i][j] == '-'))
				return (0);
			if ((av[i][j] == '+' || av[i][j] == '-') && j != 0)
				if (av[i][j - 1] != ' ')
					return (0);
			if (av[i][j] == '+' && !(av[i][j + 1] >= 48 && av[i][j + 1] <= 57))
				return (0);
			if (av[i][j] == '-' && !(av[i][j + 1] >= 48 && av[i][j + 1] <= 57))
				return (0);
		}
	}
	return (1);
}

int	ft_if_the_same(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->total_size - 1)
	{
		j = 1;
		while (j < data->total_size - i)
		{
			if (data->sorted[i] == data->sorted[i + j])
				ft_error(data);
			j++;
		}
		i++;
	}
	return (1);
}
