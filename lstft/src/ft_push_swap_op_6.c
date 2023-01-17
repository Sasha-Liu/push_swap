/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_op_6.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:31:15 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/17 16:45:19 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	rra_x(t_stack *stack)
{
	rev_rotate(&(stack->a));
}

void	rrb_x(t_stack *stack)
{
	rev_rotate(&(stack->b));
}

void	rrr_x(t_stack *stack)
{
	rev_rotate(&(stack->a));
	rev_rotate(&(stack->b));
}
