/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:56:51 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 20:48:43 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_high_pivot(int *arr, int n)
{
	int	i;

	i = (int)(n / 3) *2;
	return (arr[i]);
}

int	ft_find_low_pivot(int *arr, int n)
{
	int	i;

	i = (int)(n / 2);
	return (arr[i]);
}

void	ft_bubble_sort(int *arr, int n)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_find_pivot(t_list **stack, int n, t_pivot *pivot)
{
	int		i;
	int		*arr;
	t_list	*tmp;

	arr = (int *)malloc(sizeof(int) * (n + 1));
	if (!arr)
		exit(0);
	tmp = *stack;
	i = 0;
	while (i < n)
	{
		arr[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	arr[i] = '\0';
	ft_bubble_sort(arr, n);
	pivot->high = ft_find_high_pivot(arr, n);
	pivot->low = ft_find_low_pivot(arr, n);
	free(arr);
}
