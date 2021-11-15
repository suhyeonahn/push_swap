/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:58:17 by suahn             #+#    #+#             */
/*   Updated: 2021/11/02 12:39:22 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	t_list	*tmp;

	if ((a == NULL) || ft_lstsize(*a) <= 1)
		return ;
	tmp = (*a)->next;
	(*a)->next = (*a)->next->next;
	tmp->next = NULL;
	ft_lstadd_front(a, tmp);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	t_list	*tmp;

	if ((b == NULL) || ft_lstsize(*b) <= 1)
		return ;
	tmp = (*b)->next;
	(*b)->next = (*b)->next->next;
	tmp->next = NULL;
	ft_lstadd_front(b, tmp);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	t_list	*tmp;

	if ((a == NULL) || ft_lstsize(*a) <= 1
		|| (b == NULL) || ft_lstsize(*b) <= 1)
		return ;
	tmp = (*a)->next;
	(*a)->next = (*a)->next->next;
	tmp->next = NULL;
	ft_lstadd_front(a, tmp);
	tmp = (*b)->next;
	(*b)->next = (*b)->next->next;
	tmp->next = NULL;
	ft_lstadd_front(b, tmp);
	write(1, "ss\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if ((a == NULL) || (b == NULL) || (*b == NULL))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	ft_lstadd_front(a, tmp);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if ((b == NULL) || (a == NULL) || (*a == NULL))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_front(b, tmp);
	write(1, "pb\n", 3);
}

/*void	pb(t_list **a, t_list **b)
{
	t_list		*tmp;
	static int	count = 0;

	if ((b == NULL) || (a == NULL) || (*a == NULL))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_front_pb(b, tmp, count);
	write(1, "pb\n", 3);
	count++;
}*/
