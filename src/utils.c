/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:24:00 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/09 18:43:38 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/**
 * @brief Display the string on the screen
 *
 * @param s is the string to display
 * @param fd is the file descriptor to write
 *
 * @return doesn't return anything
 */
void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

void	correct_usage(void)
{
	ft_putendl_fd("\n\n=============== PUSH_SWAP =================\n", 2);
	ft_putendl_fd("  No valid arguments provided...\n", 2);
	ft_putendl_fd("  This program accepts integers as arguments,", 2);
	ft_putendl_fd("  integers must be separated with white-spaces,", 2);
	ft_putendl_fd("  minimum of -2,147,483,648 and maximum of ", 2);
	ft_putendl_fd("  2,147,483,647.\n", 2);
	ft_putendl_fd("  At least you must introduce one integer.\n", 2);
	ft_putendl_fd("===========================================\n", 2);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}
