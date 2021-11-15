/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:57:19 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:57:21 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_b(t_list **a, t_list **b)
{
	if ((*b)->data < (*b)->next->data)
		sb(b);
	pa(a, b);
	pa(a, b);
	return ;
}

void	rotation_mass_b(t_list **a, t_list **b, t_count c)
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

t_count	sort_mass_b(t_list **a, t_list **b, int n, t_pivot *pivot)
{
	t_count	c;

	c = init_count();
	 while (c.count < n)
	{
		if ((*b)->data < pivot->low)
		{
			rb(b);
			c.rb++;
		}
		else
		{
			pa(a, b);
			c.pa++;
			if ((*a)->data < pivot->high)
			{
				ra(a);
				c.ra++;
			}
		}
		c.count++;
	}
	 return (c);
}

void	push_b_to_a(t_list **a, t_list **b, t_pivot *pivot, int n)
{
	t_count	c;

	if (n < 2)
	{
		if (n == 1)
			pa(a, b);
		return ;
	}
	if (n == 2)
		return (sort_two_b(a, b));
	if (n == 3)
		return (sort_three_b(a, b));
	if (n == 5)
		return (sort_five_b(a, b));
	pivot->in_b_to_a++;
	ft_find_pivot(b, n, pivot);
	c = sort_mass_b(a, b, n, pivot);
	push_a_to_b(a, b, pivot, c.pa - c.ra);
	rotation_mass_b(a, b, c);
	push_a_to_b(a, b, pivot, c.ra);
	push_b_to_a(a, b, pivot, c.rb);
}
