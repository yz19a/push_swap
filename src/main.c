/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:47:56 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/09 17:25:03 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

// void	print_list(t_stack *stack)
// {
// 	while (stack)
// 	{
// 		printf("%d\n", stack->value);
// 		stack = stack->next;
// 	}
// }

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
	{
		correct_usage();
		return (1);
	}
	parse_args(&a, argc, argv);
	if (!is_sorted(a))
		sort_stack(&a, &b);
	free_list(a);
	free_list(b);
	return (EXIT_SUCCESS);
}
