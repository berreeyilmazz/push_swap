/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:45:13 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/24 14:11:59 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_word_counter(const char *str, char c)
{
	int	count;
	int	i;
	int	flag;

	count = 0;
	i = 0;
	flag = 1;
	while (str[i])
	{
		if (str[i] != c && flag == 1)
		{
			count++;
			flag = 0;
		}
		else if (str[i] == c)
			flag = 1;
		i++;
	}
	return (count);
}

int	ft_word_length(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i])
	{
		i++;
		count++;
	}
	return (count);
}

char	*ft_put_string(const char *src, char c)
{
	char	*ret;
	int		i;

	ret = malloc(sizeof(char) * ft_word_length(src, c) + 1);
	i = 0;
	while (*src && *src != c)
	{
		ret[i] = *(src++);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		size;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	size = ft_word_counter(s, c);
	result = malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (0);
	i = 0;
	j = 0;
	while (j < size && s[i])
	{
		while (s[i] == c)
			i++;
		result[j] = ft_put_string(&s[i], c);
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	result[j] = NULL;
	return (result);
}
