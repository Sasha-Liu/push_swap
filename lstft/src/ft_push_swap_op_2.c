/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_op_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:31:04 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/15 15:44:09 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	ra(t_stack *stack)
{
	rotate(&(stack->a));
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	rotate(&(stack->b));
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack)
{
	rotate(&(stack->a));
	rotate(&(stack->b));
	write(1, "rr\n", 3);
}
