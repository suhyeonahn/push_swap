/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:57:57 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:57:57 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_is_first_a(t_list **a)
{
	if ((*a)->next->data > (*a)->next->next->data)
	{
		if (ft_lstsize(*a) == 3)
		{
			rra(a);
			sa(a);
		}
		else
		{
			ra(a);
			sa(a);
			rra(a);
		}
	}
}

void	min_is_second_a(t_list **a)
{
	if ((*a)->data > (*a)->next->next->data)
	{
		if (ft_lstsize(*a) == 3)
			ra(a);
		else
		{
			sa(a);
			ra(a);
			sa(a);
			rra(a);
		}
	}
	else if ((*a)->next->next->data > (*a)->data)
		sa(a);
}

void	max_is_first_a(t_list **a)
{
	if (ft_lstsize(*a) == 3)
	{
		ra(a);
		sa(a);
	}
	else
	{
		sa(a);
		ra(a);
		sa(a);
		rra(a);
		sa(a);
	}
}

void	min_is_last_a(t_list **a)
{
	if ((*a)->data > (*a)->next->data)
		max_is_first_a(a);
	else if ((*a)->next->data > (*a)->data)
	{
		if (ft_lstsize(*a) == 3)
			rra(a);
		else
		{
			ra(a);
			sa(a);
			rra(a);
			sa(a);
		}
	}
}

void	sort_three_a(t_list **a)
{
	if ((*a)->data < (*a)->next->data && (*a)->data < (*a)->next->next->data)
		min_is_first_a(a);
	else if ((*a)->next->data < (*a)->data
		&& (*a)->next->data < (*a)->next->next->data)
		min_is_second_a(a);
	else if ((*a)->next->next->data < (*a)->data
		&& (*a)->next->next->data < (*a)->next->data)
		min_is_last_a(a);
	return ;
}
