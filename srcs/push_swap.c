/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:56:57 by suahn             #+#    #+#             */
/*   Updated: 2021/08/25 15:14:30 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_detected_exit(long long *int_arr)
{
	if (int_arr)
		free(int_arr);
	write(2, "Error\n", 6);
	exit(0);
}

void	push_swap(t_list **a, t_list **b, t_pivot *pivot, int nums)
{
	push_a_to_b(a, b, pivot, nums);
}

void	push_all_nums(long long *int_arr, t_list *stack, int argc)
{
	int	i;

	stack->data = int_arr[0];
	i = 1;
	while (argc > 2)
	{
		stack->next = ft_create_node(int_arr[i]);
		stack = stack->next;
		i++;
		argc--;
	}
	free(int_arr);
}

long long	*ft_arr_to_int(int argc, char **argv)
{
	int			i;
	long long	*int_arr;

	int_arr = (long long *)malloc(sizeof(long long) * argc);
	if (!int_arr)
		exit(0);
	i = 0;
	while (argc - 1 > i)
	{
		int_arr[i] = ft_atoi(argv[i + 1], int_arr);
		i++;
	}
	int_arr[i] = '\0';
	if (argc == 2)
	{
		free(int_arr);
		exit(0);
	}
	return (int_arr);
}

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;
	t_pivot		*pivot;
	long long	*int_arr;

	if (argc < 2)
		exit(0);
	int_arr = ft_arr_to_int(argc, argv);
	if (is_dup(int_arr, argc - 1) == 1)
		error_detected_exit(int_arr);
	if (is_sorted(int_arr, argc - 1) == 1)
	{
		free(int_arr);
		exit(0);
	}
	a = init_stack();
	pivot = init_pivot();
	push_all_nums(int_arr, a, argc);
	push_swap(&a, &b, pivot, argc - 1);
	ft_delete_lst(&a);
	free(pivot);
	return (0);
}
