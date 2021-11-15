/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:55:57 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 19:56:01 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pivot	*init_pivot(void)
{
	t_pivot	*node;

	node = (t_pivot *)malloc(sizeof(t_pivot));
	if (!node)
		exit (0);
	node->high = 0;
	node->low = 0;
	node->in_b_to_a = 0;
	return (node);
}

t_list	*init_stack(void)
{
	t_list	*stack;

	stack = (t_list *)malloc(sizeof(t_list));
	if (!stack)
		exit(0);
	stack->data = 0;
	stack->next = NULL;
	return (stack);
}

t_median	init_mid(void)
{
	t_median	mid;

	mid.h1 = 0;
	mid.h2 = 0;
	mid.l1 = 0;
	mid.l2 = 0;
	return (mid);
}

t_count	init_count(void)
{
	t_count	c;

	c.ra = 0;
	c.rb = 0;
	c.pa = 0;
	c.pb = 0;
	c.count = 0;
	return (c);
}
