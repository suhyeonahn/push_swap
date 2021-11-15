/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:58:04 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:58:05 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_is_first_b(t_list **a, t_list **b)
{
	if ((*b)->next->data > (*b)->next->next->data)
	{
		sb(b);
		pa(a, b);
		sb(b);
		pa(a, b);
		pa(a, b);
	}
	else if ((*b)->next->next->data > (*b)->next->data)
	{
		rb(b);
		sb(b);
		pa(a, b);
		pa(a, b);
		rrb(b);
		pa(a, b);
	}
}

void	min_is_second_b(t_list **a, t_list **b)
{
	if ((*b)->data > (*b)->next->next->data)
	{
		pa(a, b);
		sb(b);
		pa(a, b);
		pa(a, b);
	}
	else if ((*b)->next->next->data > (*b)->data)
	{
		if (ft_lstsize(*b) == 3)
		{
			rrb(b);
			pa(a, b);
			pa(a, b);
			pa(a, b);
		}
		else
		{
			pa(a, b);
			sb(b);
			pa(a, b);
			sa(a);
			pa(a, b);
		}
	}
}

void	min_is_last_b(t_list **a, t_list **b)
{
	if ((*b)->data > (*b)->next->data)
	{
		pa(a, b);
		pa(a, b);
		pa(a, b);
	}
	else if ((*b)->next->data > (*b)->data)
	{
		sb(b);
		pa(a, b);
		pa(a, b);
		pa(a, b);
	}
}

void	sort_three_b(t_list **a, t_list **b)
{
	if ((*b)->data < (*b)->next->data && (*b)->data < (*b)->next->next->data)
		min_is_first_b(a, b);
	else if ((*b)->next->data < (*b)->data
		&& (*b)->next->data < (*b)->next->next->data)
		min_is_second_b(a, b);
	else if ((*b)->next->next->data < (*b)->data
		&& (*b)->next->next->data < (*b)->next->data)
		min_is_last_b(a, b);
	return ;
}
