/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:56:12 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:56:14 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_dup(long long *int_arr, int n)
{
	int	i;
	int	j;
	int	dup;

	i = 0;
	dup = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (int_arr[j] == int_arr[i] && i != j)
			{
				dup = 1;
				break ;
			}
			j++;
		}
		i++;
	}
	return (dup);
}

int	is_sorted(long long *int_arr, int n)
{
	int	i;
	int	j;
	int	sorted;

	i = 0;
	sorted = 1;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (int_arr[i] > int_arr[j])
			{
				sorted = 0;
				break ;
			}
			j++;
		}
		i++;
	}
	return (sorted);
}
