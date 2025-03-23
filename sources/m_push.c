/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_push.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:25:39 by yaperalt          #+#    #+#             */
/*   Updated: 2025/03/19 15:53:38 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * @brief Moves top b node to top a node, first node in b as first node in a
 *
 * If b is empty, this function doesnt operate cause there is nothing to move
 * @param boolean checks if a message must be displayed
 */
void	pa(t_stack **stack_a, t_stack **stack_b, int boolean)
{
	t_stack	*temp;
	t_stack	*node;

	if (!*stack_b || !stack_b)
		return ;
	node = (*stack_b)->next;
	temp = *stack_b;
	temp->next = *stack_a;
	*stack_a = temp;
	*stack_b = node;
	if (boolean)
		ft_putendl_fd("pa", 1);
}

/**
 * @brief Moves to a node to top b node, first node in a as first node in b
 */
void	pb(t_stack **stack_a, t_stack **stack_b, int boolean)
{
	t_stack	*temp;
	t_stack	*node;

	if (!*stack_a || !stack_a)
		return ;
	node = (*stack_a)->next;
	temp = *stack_a;
	temp->next = *stack_b;
	*stack_b = temp;
	*stack_a = node;
	if (boolean)
		ft_putendl_fd("pb", 1);
}
