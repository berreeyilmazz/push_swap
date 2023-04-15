/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:45:27 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/15 15:56:02 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free (t_data *data)
{
	free (data->stack_a);
	free (data->stack_b);
	//free (data->str);
	free (data->sorted);
}