/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:20:14 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/27 16:18:34 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_initialize(t_data *data, char *av1)
{
	data->stack_a = 0;
	data->stack_b = 0;
	data->size_a = 0;
	data->size_b = 0;
	data->total_size = 0;
	data->sorted = 0;
	data->max_bit = 0;
	data->str = av1;
	if (!data->str || !data->str[0])
		exit(0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*thegoodplace;
	int		i;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	thegoodplace = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (thegoodplace == 0)
		return (0);
	i = 0;
	k = 0;
	while (s1[k])
		thegoodplace[i++] = s1[k++];
	k = 0;
	thegoodplace[i++] = ' ';
	while (s2[k])
		thegoodplace[i++] = s2[k++];
	thegoodplace[i] = 0;
	return (thegoodplace);
}
