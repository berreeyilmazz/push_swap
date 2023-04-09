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

void	ft_sa (int *data)
{
	int	temp;

	temp = data[0];
	data[0] = data[1];
	data[1] = data[0];
	write (1, "sa\n", 3);
}

void	ft_sb (int *data)
{
	int	temp;

	temp = data[0];
	data[0] = data[1];
	data[1] = data[0];
	write (1, "sb\n", 3);
}

void	ft_ss (int *data1, int *data2)
{
	int	temp1;
	int	temp2;

	temp1 = data1[0];
	temp2 = data2[0];
	data1[0] = data1[1];
	data1[1] = temp1;
	data2[0] = data2[1];
	data2[1] = temp2;
	write (1, "ss\n", 3);
}