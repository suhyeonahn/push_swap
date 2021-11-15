/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:58:33 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:58:34 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*tmp;

	 if ((a == NULL) || (*a == NULL))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_back(a, tmp);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*tmp;

	if ((b == NULL) || ((*b) == NULL) || (ft_lstsize(*b) < 2))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	ft_lstadd_back(b, tmp);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	t_list	*tmp;

	 if ((a == NULL) || (*a == NULL) || (b == NULL) || (*b == NULL))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_back(a, tmp);
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	ft_lstadd_back(b, tmp);
	write(1, "rr\n", 3);
}
