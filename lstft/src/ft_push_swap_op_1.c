/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_op_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:30:56 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 13:37:12 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	sa(t_stack stack)
{
	swap(stack.a);
	write(1, "sa\n", 3);
}

void	sb(t_stack stack)
{
	swap(stack.b);
	write(1, "sb\n", 3);
}

void	ss(t_stack stack)
{
	swap(stack.a);
	swap(stack.b);
	write(1, "ss\n", 3);
}

void	pa(t_stack stack)
{
	push(stack.a, stack.b);
	write(1, "pa\n", 3);
}

void	pb(t_stack stack)
{
	push(stack.b, stack.a);
	write(1, "pb\n", 3);
}
