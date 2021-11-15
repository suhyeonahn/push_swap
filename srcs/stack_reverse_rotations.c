/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reverse_rotations.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:58:26 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:58:27 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*tmp;
	t_list	*last_node;

	if ((a == NULL) || (*a == NULL))
		return ;
	tmp = *a;
	while ((tmp->next != NULL) && (tmp->next->next != NULL))
		tmp = tmp->next;
	last_node = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(a, last_node);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*tmp;
	t_list	*last_node;

	if ((b == NULL) || (*b == NULL))
		return ;
	tmp = *b;
	while ((tmp->next != NULL) && (tmp->next->next != NULL))
		tmp = tmp->next;
	last_node = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(b, last_node);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*last_node;

	if ((a == NULL) || (*a == NULL) || (b == NULL) || (*b == NULL))
		return ;
	tmp = *a;
	while ((tmp->next != NULL) && (tmp->next->next != NULL))
	{
		tmp = tmp->next;
	}
	last_node = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(a, last_node);
	tmp = *b;
	while ((tmp->next != NULL) && (tmp->next->next != NULL))
	{
		tmp = tmp->next;
	}
	last_node = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(b, last_node);
	write(1, "rrr\n", 4);
}
