/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 00:17:20 by yaperalt          #+#    #+#             */
/*   Updated: 2025/03/16 10:36:49 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int		value;
	int		fix_v;
	s_stack	*prev;
	s_stack	*next;
}	t_stack;

// utils.c
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);

#endif
