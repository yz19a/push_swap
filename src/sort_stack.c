/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:14:02 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/05 00:49:20 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_stack(t_stack **a, t_stack **b)
{
	int	size_stack;

	if (!a || !(*a) || !(is_sorted(*a)))
		return ;
	prepare_stack(a);
	size = stack_size(*a);
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4 || size == 5)
		sort_four_five(a, b, size);
	else
		radix_sort(a, b);
}
