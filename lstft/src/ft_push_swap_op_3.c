/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_op_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:31:15 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 17:04:14 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	rra(t_stack stack)
{
	rev_rotate(stack.a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack stack)
{
	rev_rotate(stack.b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack stack)
{
	rev_rotate(stack.a);
	rev_rotate(stack.b);
	write(1, "rrr\n", 4);
}
