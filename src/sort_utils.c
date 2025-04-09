/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:12:06 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/10 01:43:41 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->fix_v > (*a)->next->fix_v)
		sa(a, 1);
}

void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->fix_v;
	second = (*a)->next->fix_v;
	third = (*a)->next->next->fix_v;
	if (first > second && second < third && first < third)
		sa(a, 1);
	else if (first > second && second > third)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (first > second && second < third && first > third)
		ra(a, 1);
	else if (first < second && second > third && first < third)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (first < second && second > third && first > third)
		rra(a, 1);
}

static int	find_min_position(t_stack *stack)
{
	int		min_val;
	int		min_pos;
	int		pos;
	t_stack	*tmp;

	min_val = INT_MAX;
	min_pos = 0;
	pos = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->fix_v < min_val)
		{
			min_val = tmp->fix_v;
			min_pos = pos;
		}
		tmp = tmp->next;
		pos++;
	}
	return (min_pos);
}

void	sort_four_five(t_stack **a, t_stack **b)
{
	int	min_pos;
	int	size;

	while (stack_size(*a) > 3)
	{
		min_pos = find_min_position(*a);
		size = stack_size(*a);
		if (min_pos <= size / 2)
		{
			while (min_pos-- > 0)
				ra(a, 1);
		}
		else
		{
			while (min_pos++ < size)
				rra(a, 1);
		}
		pb(a, b, 1);
	}
	sort_three(a);
	while (*b)
		pa(a, b, 1);
}
