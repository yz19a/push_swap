/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:12:06 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/09 17:24:10 by yaperalt         ###   ########.fr       */
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

void	sort_four_five(t_stack **a, t_stack **b, int size)
{
	int	pushed;

	pushed = 0;
	while (pushed < size - 3)
	{
		if ((*a)->fix_v < size - 3)
		{
			pb(a, b, 1);
			pushed++;
		}
		else
			ra(a, 1);
	}
	sort_three(a);
	while (*b)
		pa(a, b, 1);
}
