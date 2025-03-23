/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 00:17:20 by yaperalt          #+#    #+#             */
/*   Updated: 2025/03/20 21:08:24 by yaperalt         ###   ########.fr       */
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
	int		value;
	int		fix_v;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

// utils.c
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	correct_usage(void);
int		ft_isdigit(int c);
int		ft_isspace(int c);

// utils.c
int		ft_atoi(const char *str, int *error);
int		is_valid_number(const char *str);
int		has_duplicate(t_stack *name, int value);
t_stack	*add_node(t_stack **head, int value);
void	free_list(t_stack *head);

// check_args.c
void	*process_token(t_stack **stack, char *token);
void	parse_args(t_stack **stack, int argc, char **argv);

#endif
