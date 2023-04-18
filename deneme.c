#include "push_swap.h"


/*int main(int ac, char **av)
{
    t_data	*data;
	int		i;

	i = 1;
	data = malloc(sizeof(t_data));
	if (ac < 2 || ft_check_all(av) == 0)
		return(0);
	ft_stack_initialize (data, av[1]);
	while (++i <= ac - 1)
		ft_onlystr (data, av[i]);
	data->total_size = ft_count_them(data->str);
	ft_ctrl_hexa (data);

	ft_initialize_stack_a (data);
	if (ft_if_the_same (data) == 0 || data->total_size < 2)
	{
		write (1, "Error!\n", 7);
		return (0);
	}

    int k = -1;
    while (++k < data->size_a)
        printf("first %d  %d \n", data->stack_a[k], data->stack_b[k]);
    //printf("first size a %d   b %d \n", data->size_a, data->size_b);
    
    ft_rra(data);

    int j = -1;
    while (++j < data->size_a)
        printf("than %d  %d \n", data->stack_a[j], data->stack_b[j]);
    //printf("than size a %d   b %d \n", data->size_a, data->size_b);

}*/