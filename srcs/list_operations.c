/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:56:40 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:56:42 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front_pb(t_list **lst, t_list *new_node, int count)
{
	t_list	*ptr;

	if ((lst == NULL) || (new_node == NULL))
		return ;
	if (count == 0)
		*lst = new_node;
	else
	{
		ptr = *lst;
		*lst = new_node;
		(*lst)->next = ptr;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	t_list	*ptr;

	if ((lst == NULL) || (new_node == NULL))
		return ;
	if ((*lst) == NULL)
		*lst = new_node;
	else
	{
		ptr = *lst;
		*lst = new_node;
		(*lst)->next = ptr;
	}
}

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*ptr;

	if ((lst == NULL) || (new_node == NULL))
		return ;
	ptr = *lst;
	if (ptr == NULL)
		*lst = new_node;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
}

t_list	*ft_lstdel_front(t_list **lst)
{
	t_list	*head_to_be;
	t_list	*to_del;

	if (lst == NULL)
		return (NULL);
	to_del = *lst;
	head_to_be = to_del->next;
	free(to_del);
	(*lst) = head_to_be;
	return (*lst);
}

void	ft_lstdel_back(t_list **lst)
{
	t_list	*tmp;
	t_list	*last_node;

	tmp = *lst;
	while ((tmp->next != NULL) && (tmp->next->next != NULL))
		tmp = tmp->next;
	last_node = tmp->next;
	tmp->next = NULL;
	free(last_node);
}
