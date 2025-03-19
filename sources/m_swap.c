/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:25:11 by yaperalt          #+#    #+#             */
/*   Updated: 2025/03/16 16:04:39 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 * @brief sa and sb swap the first 2 elements at the top of the stack
 * Do nothing if there is only one element or none
 * @brief ss function, does sa and sb at the same time
 */

void	sa(t_stack **stack_a, int boolean)
{
	int	temp;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	else
			temp = (*stack_a)->value;
			(*stack_a)->value = (*stack_a)->next->value;
			(*stack_a)->next->value = temp;
	if (boolean)
		ft_putendl_fd("sa", 1);
}

void	sb(t_stack **stack_b, int boolean)
{
	int	temp;

	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	else
		temp = (*stack_b)->value;
		(*stack_b)->value = (*stack_b)->next->value;
		(*stack_b)->next->value = temp;
	if (boolean)
		ft_putendl_fd("sb", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b, int boolean)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (boolean)
		ft_putendl_fd("ss", 1);
}
