/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:57:28 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:57:30 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five_a(t_list **a, t_list **b)
{
	int	mid;
	int	count;

	mid = find_median(a);
	count = 0;
	while (count < 5)
	{
		if ((*a)->data >= mid)
			ra(a);
		else
			pb(a, b);
		count++;
	}
	if (ft_lstsize(*a) != 3)
	{
		rra(a);
		rra(a);
		rra(a);
	}
	sort_three_a(a);
	sort_two_b(a, b);
	return ;
}
