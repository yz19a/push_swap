/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:19:08 by yaperalt          #+#    #+#             */
/*   Updated: 2025/04/09 18:12:14 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	*process_token(t_stack **stack, char *token)
{
	int	num;
	int	error;

	error = 0;
	if (!(is_valid_number(token)))
	{
		write(2, "arg error\n", 10);
		free_list(*stack);
		exit(EXIT_FAILURE);
	}
	num = ft_atoi(token, &error);
	if (error || has_duplicate(*stack, num))
	{
		write(2, "arg error2\n", 10);
		free_list(*stack);
		exit(EXIT_FAILURE);
	}
	return (add_node(stack, num));
}

void	parse_args(t_stack **stack, int argc, char **argv)
{
	int		i;
	int		j;
	char	*token;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			while (argv[i][j] && ft_isspace(argv[i][j]))
				j++;
			if (!argv[i][j])
				break ;
			token = &argv[i][j];
			while (argv[i][j] && !ft_isspace(argv[i][j]))
				j++;
			if (argv[i][j])
				argv[i][j] = '\0';
			process_token(stack, token);
		}
		i--;
	}
}
