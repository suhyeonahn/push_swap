/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:57:11 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:57:13 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_a(t_list **a)
{
	if ((*a)->data > (*a)->next->data)
		sa(a);
	return ;
}

void	it_is_in_b_to_a(t_list **a, t_list **b, t_count c)
{
	int	i;
	int	j;

	i = 0;
	while (i < c.ra && i < c.rb)
	{
		rrr(a, b);
		i++;
	}
	j = i;
	while (i < c.ra)
	{
		rra(a);
		i++;
	}
	while (j < c.rb)
	{
		rrb(b);
		j++;
	}
}

void	rotation_mass_a(t_list **a, t_list **b, t_pivot *pivot, t_count c)
{
	int	j;

	if (pivot->in_b_to_a > 0)
		it_is_in_b_to_a(a, b, c);
	else if (pivot->in_b_to_a == 0)
	{
		j = 0;
		while (j < c.rb)
		{
			rrb(b);
			j++;
		}
	}
}

t_count	sort_mass_a(t_list **a, t_list **b, int n, t_pivot *pivot)
{
	t_count	c;

	c = init_count();
	while (c.count < n)
	{
		if ((*a)->data >= pivot->high)
		{
			ra(a);
			c.ra++;
		}
		else
		{
			pb(a, b);
			c.pb++;
			if ((*b)->data >= pivot->low)
			{
				rb(b);
				c.rb++;
			}
		}
		c.count++;
	}
	return (c);
}

void	push_a_to_b(t_list **a, t_list **b, t_pivot *pivot, int nums)
{
	t_count	c;

	if (nums < 2)
		return ;
	if (nums == 2)
		return (sort_two_a(a));
	if (nums == 3)
		return (sort_three_a(a));
	if (nums == 5)
		return (sort_five_a(a, b));
	ft_find_pivot(a, nums, pivot);
	c = sort_mass_a(a, b, nums, pivot);
	rotation_mass_a(a, b, pivot, c);
	push_a_to_b(a, b, pivot, c.ra);
	push_b_to_a(a, b, pivot, c.rb);
	push_b_to_a(a, b, pivot, c.pb - c.rb);
}
