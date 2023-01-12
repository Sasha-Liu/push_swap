/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_op_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:31:15 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 13:35:14 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	rra(t_stack stack)
{
	rev_rotate(stack.a);
	write(1, "rra\n", 3);
}

void	rrb(t_stack stack)
{
	rev_rotate(stack.b);
	write(1, "rrb\n", 3);
}

void	rrr(t_stack stack)
{
	rev_rotate(stack.a);
	rev_rotate(stack.b);
	write(1, "rrr\n", 3);
}
