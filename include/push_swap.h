/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 00:17:20 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/09 18:48:37 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				fix_v;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

// utils.c
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_isdigit(int c);
int		ft_isspace(int c);

// utils2.c
int		ft_atoi(const char *str, int *error);
int		is_valid_number(const char *str);
int		has_duplicate(t_stack *name, int value);
t_stack	*add_node(t_stack **head, int value);
void	free_list(t_stack *head);

// check_args.c
void	*process_token(t_stack **stack, char *token);
void	parse_args(t_stack **stack, int argc, char **argv);

// m_swap.c
void	sa(t_stack **stack_a, int boolean);
void	sb(t_stack **stack_b, int boolean);
void	ss(t_stack **stack_a, t_stack **stack_b, int boolean);

// m_push.c
void	pa(t_stack **stack_a, t_stack **stack_b, int boolean);
void	pb(t_stack **stack_a, t_stack **stack_b, int boolean);

// m_rotate.c
void	ra(t_stack **stack_a, int boolean);
void	rb(t_stack **stack_b, int boolean);
void	rr(t_stack **stack_a, t_stack **stack_b, int boolean);

// m_reverse.c
void	rra(t_stack **stack_a, int boolean);
void	rrb(t_stack **stack_b, int boolean);
void	rrr(t_stack **stack_a, t_stack **stack_b, int boolean);

// algorithm.c
int		is_sorted(t_stack *stack);
int		stack_size(t_stack *stack);
int		find_max(t_stack *stack);
void	radix_sort(t_stack **a, t_stack **b);

// index.c
void	assign_next_index(t_stack **a, int index);
void	index_stack(t_stack **a);
void	prepare_stack(t_stack **a);

// sort_utils.c
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_four_five(t_stack **a, t_stack **b, int size);

// sort_stack.c
void	sort_stack(t_stack **a, t_stack **b);

#endif
