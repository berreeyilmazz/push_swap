/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_and_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:04:22 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/27 15:53:02 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_data *data)
{
	free(data->stack_a);
	free(data->stack_b);
	free(data->sorted);
}

void	ft_error(t_data *data)
{
	write(2, "Error\n", 6);
	ft_free(data);
	exit(0);
}
