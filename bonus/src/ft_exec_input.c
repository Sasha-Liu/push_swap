/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:53:20 by sasha             #+#    #+#             */
/*   Updated: 2023/01/17 16:30:48 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void    ft_exec_input(t_stack *stack, char *input)
{
	while (*input)
    {
		ft_exec_1(stack, &input);
		ft_exec_2(stack, &input);
		ft_exec_3(stack, &input);
    }
}

void	ft_exec_1(t_stack *stack, char **input)
{
	if (ft_strncmp("sa\n", *input, 3) == 0)
	{
		*input += 3;
		sa(stack);
	}
	else if (ft_strncmp("sb\n", *input, 3) == 0)
	{
		*input += 3;
		sb(stack);
	}
	else if (ft_strncmp("ss\n", *input, 3) == 0)
	{
		*input += 3;
		ss(stack);
	}
}

void	ft_exec_2(t_stack *stack, char **input)
{
	if (ft_strncmp("ra\n", *input, 3) == 0)
	{
		*input += 3;
		ra(stack);
	}
	else if (ft_strncmp("rb\n", *input, 3) == 0)
	{
		*input += 3;
		rb(stack);
	}
	else if (ft_strncmp("rr\n", *input, 3) == 0)
	{
		*input += 3;
		rr(stack);
	}
}

void	ft_exec_3(t_stack *stack, char **input)
{
	if (ft_strncmp("rra\n", *input, 4) == 0)
	{
		*input += 3;
		rra(stack);
	}
	else if (ft_strncmp("rrb\n", *input, 4) == 0)
	{
		*input += 3;
		rrb(stack);
	}
	else if (ft_strncmp("rrr\n", *input, 4) == 0)
	{
		*input += 3;
		rrr(stack);
	}
}