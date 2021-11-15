/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:56:31 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:56:32 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_create_node(int data)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		exit (0);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_list *lst)
{
	int	lst_size;

	if (lst == NULL)
		return (0);
	lst_size = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		lst_size++;
	}
	return (lst_size);
}

void	ft_delete_lst(t_list **lst)
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}
