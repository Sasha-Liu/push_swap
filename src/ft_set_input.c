/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:13:44 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/18 15:53:23 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_input(int argc, char **argv, int *n, char ***input)
{
	if (argc == 2 && ft_strchr(argv[1], ' ') && !ft_is_empty_str(argv[1]))
	{
		*input = ft_split(argv[1], ' ');
		if (*input == NULL)
		{
			write(2, "ft_split fails\n", 15);
			return ;
		}
		*n = ft_strs_len(*input);
	}
}

int	ft_strs_len(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

int	ft_is_empty_str(char *str)
{
	while (*str)
	{
		if (*str == ' ')
			str++;
		else
			return (0);
	}
	return (1);
}
