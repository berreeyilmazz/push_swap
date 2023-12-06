/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 21:21:46 by havyilma          #+#    #+#             */
/*   Updated: 2023/04/24 14:33:11 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
	int		*stack_a;
	int		*stack_b;
	int		size_a;
	int		size_b;
	int		total_size;
	char	*str;
	int		*sorted;
	int		max_bit;

}			t_data;

int			ft_check_av(char **av, int i, int j, t_data *data);
int			ft_count_them(char *str);
int			ft_check_all(char **av, t_data *data);
void		ft_onlystr(t_data *data, char *av);
int			ft_my_atoi(char *str, t_data *data);
int			ft_word_counter(const char *str, char c);
int			ft_word_length(const char *str, char c);
int			ft_strlen(const char *str);
char		*ft_put_string(const char *src, char c);
char		**ft_split(const char *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_stack_initialize(t_data *data, char *av1);
void		ft_initialize_stack_a(t_data *data);
void		ft_bubble_sort(t_data *data);
int			ft_if_the_same(t_data *data);
void		ft_three_args(t_data *data);
void		ft_five_args(t_data *data);
int			check_sorted(t_data *data);
void		ft_sa(t_data *data);
void		ft_sb(t_data *data);
void		ft_ss(t_data *data2);
void		ft_pa(t_data *data);
void		ft_pb(t_data *data);
void		ft_ra(t_data *data);
void		ft_rb(t_data *data);
void		ft_rr(t_data *data);
void		ft_rra(t_data *data);
void		ft_rrb(t_data *data);
void		ft_rrr(t_data *data);
void		ft_radix(t_data *data);
void		ft_sort_dealer(t_data *data);
void		ft_free(t_data *data);
int			ft_ctrl_hexa(t_data *data);
int			*decrease_indice(int *arr, int size);
int			*increase_indice(int *arr, int size);
int			ft_find_index(t_data *data, int nbr);
void		find_maxbit(t_data *data);
void		ft_error(t_data *data);

#endif
