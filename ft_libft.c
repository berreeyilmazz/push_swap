/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:20:14 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/08 18:32:49 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	long		i;
	long		sign;
	long		result;

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
			return (-1);
		else if (result * sign < -2147483648)
			return (0);
	}
	return (result * sign);
}

int	ft_strlen (const char *str)
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