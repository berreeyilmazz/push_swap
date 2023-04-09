/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_at_the_beginning.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:33:33 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/09 02:35:01 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_all(t_data *data, char **av, int ac)
{
	if (ft_check_av_and_send (av, 0, -1) == 0)
	{
		write (1,"Error!", 6);
		return (0);
	}
	return (ft_count_them(data, av, ac) || ft_if_the_same (data));
}

int	ft_check_av_and_send (char **av, int i, int j)
{
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (!((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == ' ' || av[i][j] == '+' || av[i][j] == '-'))
				return(0);
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

int	ft_count_them(t_data *data, char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac - 1)
	{
		j = -1;
		while (av[i][++j])
		{
			while (av[i][j] == ' ' || av[i][j] == '+' || av[i][j] == '-')
				j++;
			while (av[i][j + 1] >= 48 && av[i][j + 1] <= 57)
					j++;
			data->total_size++;
		}
		i++;
	}
	data->total_size++;
	return (1);
}

int	ft_if_the_same (t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->total_size - 2)
	{
		j = 0;
		while (j < data->total_size - 1)
		{
			if (data->sorted[i] == data->sorted[i + j])
			{
				write (1, "Error!", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	printf("//\n");
	return (1);
}