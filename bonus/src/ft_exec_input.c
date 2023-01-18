/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:53:20 by sasha             #+#    #+#             */
/*   Updated: 2023/01/18 16:02:32 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_exec_input(t_stack *stack, char *input)
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
		sa_x(stack);
	}
	else if (ft_strncmp("sb\n", *input, 3) == 0)
	{
		*input += 3;
		sb_x(stack);
	}
	else if (ft_strncmp("ss\n", *input, 3) == 0)
	{
		*input += 3;
		ss_x(stack);
	}
	else if (ft_strncmp("pa\n", *input, 3) == 0)
	{
		*input += 3;
		pa_x(stack);
	}
	else if (ft_strncmp("pb\n", *input, 3) == 0)
	{
		*input += 3;
		pb_x(stack);
	}
}

void	ft_exec_2(t_stack *stack, char **input)
{
	if (ft_strncmp("ra\n", *input, 3) == 0)
	{
		*input += 3;
		ra_x(stack);
	}
	else if (ft_strncmp("rb\n", *input, 3) == 0)
	{
		*input += 3;
		rb_x(stack);
	}
	else if (ft_strncmp("rr\n", *input, 3) == 0)
	{
		*input += 3;
		rr_x(stack);
	}
}

void	ft_exec_3(t_stack *stack, char **input)
{
	if (ft_strncmp("rra\n", *input, 4) == 0)
	{
		*input += 4;
		rra_x(stack);
	}
	else if (ft_strncmp("rrb\n", *input, 4) == 0)
	{
		*input += 4;
		rrb_x(stack);
	}
	else if (ft_strncmp("rrr\n", *input, 4) == 0)
	{
		*input += 4;
		rrr_x(stack);
	}
}
