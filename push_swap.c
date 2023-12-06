/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:30:25 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/27 16:17:48 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*data;
	int		i;

	i = 1;
	data = malloc(sizeof(t_data));
	if (!av || !av[0])
		return (0);
	if (ac < 2 || ft_check_all(av, data) == 0)
		exit (0);
	ft_stack_initialize(data, av[1]);
	while (++i <= ac - 1)
		ft_onlystr(data, av[i]);
	data->total_size = ft_count_them(data->str);
	ft_ctrl_hexa(data);
	ft_initialize_stack_a(data);
	if (ft_if_the_same(data) == 0)
		ft_error(data);
	if (data->total_size == 1)
		exit(0);
	find_maxbit(data);
	ft_sort_dealer(data);
	return (0);
}
