/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:57:48 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:57:49 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ret_median(t_median mid)
{
	if (mid.h1 > mid.h2)
	{
		if (mid.h2 > mid.l1)
			return (mid.h2);
		else
			return (mid.l1);
	}
	else
	{
		if (mid.h1 > mid.l2)
			return (mid.h1);
		else
			return (mid.l2);
	}
}

t_median	continue_median_operation(t_list **stack, t_median mid)
{
	if (mid.h1 > mid.h2)
	{
		if ((*stack)->next->next->next->next->data > mid.l1)
			mid.h1 = (*stack)->next->next->next->next->data;
		else
		{
			mid.h1 = mid.l1;
			mid.l1 = (*stack)->next->next->next->next->data;
		}
	}
	else
	{
		if ((*stack)->next->next->next->next->data > mid.l2)
			mid.h2 = (*stack)->next->next->next->next->data;
		else
		{
			mid.h2 = mid.l2;
			mid.l2 = (*stack)->next->next->next->next->data;
		}
	}
	return (mid);
}

int	find_median(t_list **stack)
{
	t_median	mid;

	mid = init_mid();
	if ((*stack)->data > (*stack)->next->data)
	{
		mid.h1 = (*stack)->data;
		mid.l1 = (*stack)->next->data;
	}
	else
	{
		mid.h1 = (*stack)->next->data;
		mid.l1 = (*stack)->data;
	}
	if ((*stack)->next->next->data > (*stack)->next->next->next->data)
	{
		mid.h2 = (*stack)->next->next->data;
		mid.l2 = (*stack)->next->next->next->data;
	}
	else
	{
		mid.h2 = (*stack)->next->next->next->data;
		mid.l2 = (*stack)->next->next->data;
	}
	mid = continue_median_operation(stack, mid);
	return (ret_median(mid));
}

void	sort_five_b(t_list **a, t_list **b)
{
	int	count;
	int	mid;

	mid = find_median(b);
	count = 0;
	while (count < 5)
	{
		if ((*b)->data >= mid)
			pa(a, b);
		else
			rb(b);
		count++;
	}
	if (ft_lstsize(*b) != 2)
	{
		rrb(b);
		rrb(b);
	}
	sort_three_a(a);
	sort_two_b(a, b);
	return ;
}
