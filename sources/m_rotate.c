/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:25:47 by yaperalt          #+#    #+#             */
/*   Updated: 2025/03/19 17:20:18 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * @brief rotate functions shift up all elements of the stack by 1.
 * First to last.
 */

void	ra(t_stack **stack_a, int boolean)
{
	t_stack	*old_head;
	t_stack	*old_tail;
	t_stack	*new_head;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	old_head = *stack_a;
	old_tail = *stack_a;
	while (old_tail->next)
		old_tail = old_tail->next;
	old_tail->next = old_head;
	new_head = old_head->next;
	old_head->next = NULL;
	*stack_a = new_head;
	if (boolean)
		ft_putendl_fd("ra", 1);
}

void	rb(t_stack **stack_b, int boolean)
{
	t_stack	*old_head;
	t_stack	*old_tail;
	t_stack	*new_head;

	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	old_head = *stack_b;
	old_tail = *stack_b;
	while (old_tail->next)
		old_tail = old_tail->next;
	old_tail->next = old_head;
	new_head = old_head->next;
	old_head->next = NULL;
	*stack_b = new_head;
	if (boolean)
		ft_putendl_fd("rb", 1);
}

void	rr(t_stack **stack_a, t_stack **stack_b, int boolean)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (boolean)
		ft_putendl_fd("rr", 1);
}
