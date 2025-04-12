/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:14:02 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/12 17:34:06 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void sort_stack(t_stack **a, t_stack **b)
{
	int size_stack;

	if (!a || !(*a))
		return;
	if (is_sorted(*a))
		return;
	prepare_stack(a);
	size_stack = stack_size(*a);
	if (size_stack == 2)
		sort_two(a);
	else if (size_stack == 3)
		sort_three(a);
	else if (size_stack == 4 || size_stack == 5)
		sort_four_five(a, b);
	else
		radix_sort(a, b);
}
