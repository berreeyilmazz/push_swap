/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:17:33 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/08 23:31:06 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa (t_data *data)
{
	int	temp;

	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	write (1, "sa\n", 3);
}

void	ft_sb (t_data *data)
{
	int	temp;

	temp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = temp;
	write (1, "sb\n", 3);
}

void	ft_ss (t_data *data)
{
	int	tempa;
	int	tempb;

	tempa = data->stack_a[0];
	tempb = data->stack_b[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = tempa;
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = tempb;
	write (1, "ss\n", 3);
}