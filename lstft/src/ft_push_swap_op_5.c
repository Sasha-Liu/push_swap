/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_op_5.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:31:04 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/17 16:44:56 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	ra_x(t_stack *stack)
{
	rotate(&(stack->a));
}

void	rb_x(t_stack *stack)
{
	rotate(&(stack->b));
}

void	rr_x(t_stack *stack)
{
	rotate(&(stack->a));
	rotate(&(stack->b));
}
