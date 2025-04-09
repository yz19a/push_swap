/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:20:59 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/09 17:23:04 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/**
 $	stack: Pointer to the pointer to the top node of the stack (t_stack **).​
 $
 $	*stack: Pointer to the top node of the stack (t_stack *).​
 $
 $ 	**stack: The top node itself (t_stack).​
 $
 */
#include "../include/push_swap.h"

/**
 $	stack: Pointer to the pointer to the top node of the stack (t_stack **).​
 $
 $	*stack: Pointer to the top node of the stack (t_stack *).​
 $
 $ 	**stack: The top node itself (t_stack).​
 $
 */
#include <limits.h>

void	assign_next_index(t_stack **a, int index)
{
	t_stack	*temp;
	int		min;

	temp = *a;
	min = INT_MAX;
	while (temp)
	{
		if (temp->value < min && temp->fix_v == -1)
			min = temp->value;
		temp = temp->next;
	}
	temp = *a;
	while (temp)
	{
		if (temp->value == min && temp->fix_v == -1)
		{
			temp->fix_v = index;
			break ;
		}
		temp = temp->next;
	}
}

void	index_stack(t_stack **a)
{
	int		index;
	t_stack	*current;

	index = 0;
	if (!a || !*a)
		return ;
	current = *a;
	while (current)
	{
		current = current->next;
		assign_next_index(a, index++);
	}
}

void	prepare_stack(t_stack **a)
{
	t_stack	*temp;

	if (!a || !*a)
		return ;
	temp = *a;
	while (temp)
	{
		temp->fix_v = -1;
		temp = temp->next;
	}
	index_stack(a);
}
