/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:59:10 by havyilma          #+#    #+#             */
/*   Updated: 2023/02/02 18:37:50 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_argv_check(char *av)
{
	int	indx;

	indx = 0;
	while(av[indx])
	{
		if(!((av[indx] >= 48 && av[indx] <= 57) || av[indx] == 32))
			exit(1);
		indx++;
	}
	return(1);
}

int	ft_atoi(char *av)
{
	int		sign;
	int		number;
	int		i;

	i = 0;
	sign = 1;
	number = 0;
	while(av[i++])
	{
		if(av[i] == 43)
			i++;
		if(av[i] == 45)
		{
			sign *= -1;
			i++;
		}
		while(av[i] >= 48 && av[i] <= 57)
		{
			number = (av[i] - 48) + (number * 10);
			i++;
		}
	}
	return(number * sign);
}

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strjoin(char *p1, char *p2, int start, int size)
{
	int		indx;
	int		indy;
	char	*newstr;

	indx = 0;
	indy = 0;
	newstr = malloc(sizeof(char) * ft_strlen(p1) + ft_strlen(p2));
	while(p1[indx])
		newstr[indx++] = p1[indy++];
	while(p2[indx])
		newstr[indx] = p2[indy++];
	free(p1);
	free(p2);
	return(newstr);
}

void	ft_build(t_stack *stack_a, t_stack *stack_b, char *str)
{

}

/*
	indx = 0;
	while(p1[indx] == 32)
		indx++;
	cntrl = indx;
	while(p2[indx] != 32)
		indx++;
*/

int	*ft_array(char **av)
{
	int		indx;
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = 0;
	indx = 0;
	while(av[indx])
	{
		while(av[indx][i])
		{
			str[indx] = ft_atoi(*av[indx]);
			if(av[indx][i] == 32)
				indx++;
			if(av[indx][i + 1])
				write(1, ' ', 1);
		}
	}
	indx = 0;
	while(str[indx])
	{
		if(str[indx] == )
	}

}
