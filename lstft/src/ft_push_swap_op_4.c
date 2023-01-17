/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_op_4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:30:56 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/17 16:44:29 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	sa_x(t_stack *stack)
{
	swap(&(stack->a));
}

void	sb_x(t_stack *stack)
{
	swap(&(stack->b));
}

void	ss_x(t_stack *stack)
{
	swap(&(stack->a));
	swap(&(stack->b));
}

void	pa_x(t_stack *stack)
{
	push(&(stack->a), &(stack->b));
}

void	pb_x(t_stack *stack)
{
	push(&(stack->b), &(stack->a));
}
