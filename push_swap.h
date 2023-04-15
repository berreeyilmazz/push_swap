/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:21:46 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/15 15:57:34 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct s_data
{
	int		*stack_a;
	int		*stack_b;
	int		size_a;
	int		size_b;
	int		total_size;
	char	*str;
	int		*sorted;

}	t_data;

int		ft_check_av_and_send (char **av, int i, int j);
int		ft_count_them(t_data *data, char **av, int ac);
int 	ft_check_all(t_data *data, char **av, int ac);
void	ft_onlystr(t_data *data, char *av);
int		ft_atoi(char *str);
int		word_counter(const char *str, char c);
int		word_len(const char *str, char c);
int		ft_strlen (const char *str);
char	*stringer(const char *src, char c);
char	**ft_split(const char *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_stack_initialize(t_data *data, char *av1);
void	ft_initialize_stack_a (t_data *data);
void	ft_bubble_sort (t_data *data);
void	ft_put_index (t_data *data);
int		ft_if_the_same (t_data *data);
int		ft_sort_process(t_data *data);
void	ft_three_args(t_data *data);
void	ft_five_args(t_data *data);
int		ft_find_max(t_data *data, char a_or_b);
int		ft_find_min(t_data *data, char a_or_b);
int		check_sorted(t_data *data);
void	ft_sa (int *data);
void	ft_sb (int *data);
void	ft_ss (int *data1, int *data2);
void 	ft_pa (int *stack_a, int *stack_b, t_data *data);
void 	ft_pb (int *stack_a, int *stack_b, t_data *data);
void	ft_ra (int *stack, t_data *data);
void	ft_rb (int *stack, t_data *data);
void	ft_rr (int *stack_a, int *stack_b, t_data *data);
void	ft_rra (int *stack, t_data *data);
void	ft_rrb (int *stack, t_data *data);
void	ft_rrr(int	*stack_a, int *stack_b, t_data *data);
void	ft_radix (t_data *data);
int		ft_find_maximum_bit (t_data *data);
void	ft_sort_dealer (t_data *data);
void	ft_free (t_data *data);




#endif
