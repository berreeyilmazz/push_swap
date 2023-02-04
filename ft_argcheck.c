/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:59:10 by havyilma          #+#    #+#             */
/*   Updated: 2023/02/04 19:58:44 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i])
		i++;
	return(i);
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
		while(av[i] == 32)
			i++;
		if(av[i] == 43)
			i++;
		if(av[i++] == 45)
			sign *= -1;
		while(av[i] >= 48 && av[i] <= 57)
		{
			number = (av[i] - 48) + (number * 10);
			i++;
		}
	}
	return(number * sign);
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
		newstr[indx++] = p2[indy++];
	free(p1);
	free(p2);
	return(newstr);
}

char	*ft_flat(char **av, int i, int k)
{
	int		indx;
	char	*new;

	indx = 0;
	while (av[k])
	{
		while(av[k][i++])
			new[indx++] = av[k][i];
		write(1, "\n", 1);
		k++;
		i = 0;
	}
	return (new);
}

char	*ft_flawless_return(char **av, int i, int k)
{
	char	*come;
	char	*go;
	int		cnt;

	come = ft_flat(av, 0, 0);
	while(come[i] == 32)
		i++;
	while(come[i++])
	{
		if((come[i] >= 48 && come[i] <= 57))
			go[k++] = come[i];
		else
			return(0);
		while(come[i++] == 32)
		{
			if(come[i + 1] >= 48 && come[i + 1] <= 57)
				go[i] = 32;
		}
	}
	return(go);
}

int ft_argv_check(char **av, int indx)
{
	char	*new;

	new = ft_flawless_return(av, 0, 0);
	if(new)
	{
		while(new[indx])
		{
			if(!((new[indx] >= 48 && new[indx] <= 57) || new[indx] == 32))
				return(0);
			indx++;
		}
		return(1);
	}
	return(0);
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

}*/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
