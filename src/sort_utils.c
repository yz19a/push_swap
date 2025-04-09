/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:12:06 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/09 17:14:39 by yaperalt         ###   ########.fr       */
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
	int	a;
	int	b;
	int	c;

	a = (*a)->fix_v;
	b = (*a)->next->fix_v;
	c = (*a)->next->next->fix_v;
	if (a > b && b < c && a < c)
		sa(a, 1);
	else if (a > b && b > c)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (a > b && b < c && a > c)
		ra(a, 1);
	else if (a < b && b > c && a < c)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (a < b && b > c && a > c)
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
