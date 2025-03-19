/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_reverse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:26:01 by yaperalt          #+#    #+#             */
/*   Updated: 2025/03/19 14:20:53 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_stack **stack_a, int boolean)
{
	t_stack	*second_last;
	t_stack	*last;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	second_last = *stack_a;
	while (second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	if (boolean)
		ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **stack_b, int boolean)
{
	t_stack	*second_last;
	t_stack	*last;

	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return;
	second_last = *stack_b;
	while (second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	if (boolean)
		ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack **stack_a, t_stack **stack_b, int boolean)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	if (boolean)
		ft_putendl_fd("rrr", 1);
}
