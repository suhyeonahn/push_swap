/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suahn <suahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 20:01:28 by suahn             #+#    #+#             */
/*   Updated: 2021/08/24 20:01:29 by suahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_list {
	int				data;
	struct s_list	*next;
}	t_list;

typedef struct s_pivot {
	int	high;
	int	low;
	int	in_b_to_a;
}	t_pivot;

typedef struct s_median {
	int	h1;
	int	h2;
	int	l1;
	int	l2;
}	t_median;

typedef struct s_count {
	int	ra;
	int	rb;
	int	pa;
	int	pb;
	int	count;
}	t_count;

typedef struct s_atoi {
	int			i;
	int			sign;
	long long	num;
}	t_atoi;

int			ft_strlen(const char *str);
long long	ft_atoi(const char *str, long long *int_arr);

t_pivot		*init_pivot(void);
t_list		*init_stack(void);
t_median	init_mid(void);
t_count		init_count(void);

void		error_detected_exit(long long *int_arr);
void		push_swap(t_list **a, t_list **b, t_pivot *pivot, int nums);
void		push_all_nums(long long *int_arr, t_list *stack, int argc);
long long	*ft_arr_to_int(int argc, char **argv);
int			main(int argc, char **argv);

int			ft_find_high_pivot(int *arr, int n);
int			ft_find_low_pivot(int *arr, int n);
void		ft_bubble_sort(int *arr, int n);
void		ft_find_pivot(t_list **stack, int n, t_pivot *pivot);

int			is_dup(long long *int_arr, int n);
int			is_sorted(long long *int_arr, int n);

void		ft_lstadd_front_pb(t_list **lst, t_list *new_node, int count);
void		ft_lstadd_front(t_list **lst, t_list *new_node);
void		ft_lstadd_back(t_list **lst, t_list *new_node);
t_list		*ft_lstdel_front(t_list **lst);
void		ft_lstdel_back(t_list **lst);

t_list		*ft_create_node(int data);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		ft_delete_lst(t_list **lst);

void		sort_two_a(t_list **a);
void		it_is_in_b_to_a(t_list **a, t_list **b, t_count c);
void		rotation_mass_a(t_list **a, t_list **b, t_pivot *pivot, t_count c);
t_count		sort_mass_a(t_list **a, t_list **b, int n, t_pivot *pivot);
void		push_a_to_b(t_list **a, t_list **b, t_pivot *pivot, int nums);

void		sort_two_b(t_list **a, t_list **b);
void		rotation_mass_b(t_list **a, t_list **b, t_count c);
t_count		sort_mass_b(t_list **a, t_list **b, int n, t_pivot *pivot);
void		push_b_to_a(t_list **a, t_list **b, t_pivot *pivot, int n);

int			ret_median(t_median mid);
t_median	continue_median_operation(t_list **stack, t_median mid);
int			find_median(t_list **stack);
void		sort_five_a(t_list **a, t_list **b);
void		sort_five_b(t_list **a, t_list **b);

void		min_is_first_a(t_list **a);
void		min_is_second_a(t_list **a);
void		max_is_first_a(t_list **a);
void		min_is_last_a(t_list **a);
void		sort_three_a(t_list **a);

void		min_is_first_b(t_list **a, t_list **b);
void		min_is_second_b(t_list **a, t_list **b);
void		min_is_last_b(t_list **a, t_list **b);
void		sort_three_b(t_list **a, t_list **b);

void		sa(t_list **a);
void		sb(t_list **b);
void		ss(t_list **a, t_list **b);
void		pa(t_list **a, t_list **b);
void		pb(t_list **a, t_list **b);
void		rra(t_list **a);
void		rrb(t_list **b);
void		rrr(t_list **a, t_list **b);
void		ra(t_list **a);
void		rb(t_list **b);
void		rr(t_list **a, t_list **b);

#endif
