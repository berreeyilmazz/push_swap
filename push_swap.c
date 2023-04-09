/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:30:25 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/09 03:17:18 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_initialize(t_data *data, char *av1)
{
	data->stack_a = 0;
	data->stack_b = 0;
	data->size_a = 0;
	data->size_b = 0;
	data->str = av1;
}

int	main (int ac, char **av)
{
	t_data	*data;
	int		i;

	i = 1;
	data = malloc(sizeof(t_data));
	if (ac < 2 || ft_check_all(data, av, ac) == 0)
		return(0);
	ft_stack_initialize (data, av[1]);
	while (++i <= ac - 1)
		ft_onlystr (data, av[i]);
	ft_initialize_stack_a (data);
	if (data->total_size <= 3)
		ft_three_args (data);
	else if (data->total_size < 6)
		ft_five_args (data);
	else
		ft_sort_process (data);
	return (0);
}