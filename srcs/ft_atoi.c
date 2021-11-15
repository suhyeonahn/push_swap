/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:55:09 by suahn             #+#    #+#             */
/*   Updated: 2021/11/02 12:50:03 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	return (size);
}

long long	ft_atoi(const char *str, long long *int_arr)
{
	t_atoi	a;

	a.i = 0;
	a.sign = 1;
	a.num = 0;
	if (!str[a.i])
		error_detected_exit(int_arr);
	if (str[a.i] == '-')
	{
		a.sign = -1;
		a.i++;
		if (!str[a.i] || (str[a.i] < '0' || str[a.i] > '9'))
			error_detected_exit(int_arr);
	}
	while (str[a.i])
	{
		if (str[a.i] < '0' || str[a.i] > '9')
			error_detected_exit(int_arr);
		if (str[a.i] >= '0' && str[a.i] <= '9')
			a.num = a.num * 10 + str[a.i] - '0';
		a.i++;
	}
	if (a.sign * a.num < INT_MIN || a.sign * a.num > INT_MAX)
		error_detected_exit(int_arr);
	return (a.sign * a.num);
}
