/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:52:40 by sasha             #+#    #+#             */
/*   Updated: 2023/01/17 15:52:43 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_check_input(char **input)
{
	if (ft_parse_input(*input) == -1)
	{
		free(*input);
		*input = NULL;
		write(2, "Error\n", 6);
		return (-1);
	}
	return (1);
}

//if input is valid, return 1
//if not, return -1 
int	ft_parse_input(char *input)
{
    while (*input)
    {
		if (ft_strncmp("sa\n", input, 3) == 0)
			input += 3;
		else if (ft_strncmp("sb\n", input, 3) == 0)
			input += 3;
		else if (ft_strncmp("ss\n", input, 3) == 0)
			input += 3;
		else if (ft_strncmp("ra\n", input, 3) == 0)
			input += 3;
		else if (ft_strncmp("rb\n", input, 3) == 0)
			input += 3;
		else if (ft_strncmp("rr\n", input, 3) == 0)
			input += 3;
		else if (ft_strncmp("rra\n", input, 4) == 0)
			input += 4;
		else if (ft_strncmp("rrb\n", input, 4) == 0)
			input += 4;
		else if (ft_strncmp("rrr\n", input, 4) == 0)
			input += 4;
		else
			return (-1);
    }
	return (1);
}