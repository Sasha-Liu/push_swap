/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_required.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:01:28 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/18 15:50:19 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//calculate the op required to put one item from a to b in the right position
//the item is the n th node on the stack
//n range from 0 to n-1 
//the buffer rotate will save the rotation required
//Example: if we need 5 ra, 1 pb, and 5 rrb
//in the buffer we will have rotate = {5, -5}, return 11
/*
if rotate[0] and rotate[1] have diffrent sign > abs > addition
if have same sign > abs > max
*/
int	ft_op_required(t_stack *stack, int n, int rotate[])
{
	int		order;
	int		i;
	int		b_pos;
	t_node	*a;

	a = stack->a;
	i = 0;
	while (i < n)
	{
		a = a->next;
		i++;
	}
	order = a->order;
	b_pos = ft_get_pos(stack->b, order);
	rotate[0] = ft_rx_required(n, stack->a);
	rotate[1] = ft_rx_required(b_pos, stack->b);
	if (ft_abs(rotate[0] + rotate[1]) < ft_abs(rotate[0]))
		return (ft_abs(rotate[0] - rotate[1]) + 1);
	return (ft_max(ft_abs(rotate[0]), ft_abs(rotate[1])) + 1);
}

//how many rotation required to move the right node on top
//new node must be put on top of a node with lower order
//new min or new max must be put on the old max
int	ft_get_pos(t_node *b, int order)
{
	int	min_order;
	int	max_order;

	min_order = ft_min_order(b);
	max_order = ft_max_order(b);
	if (order > max_order || order < min_order)
	{
		return (ft_max_pos(b));
	}
	else
	{
		return (ft_smaller_pos(b, order));
	}
}

//return the position of the node with smaller order
int	ft_smaller_pos(t_node *b, int order)
{
	int	i;
	int	len;

	i = 0;
	len = ft_lstlen(b);
	while (i < len)
	{
		if (b->prev->order > order && b->order < order)
			return (i);
		b = b->next;
		i++;
	}
	return (-1);
}

//return the position of the max node
int	ft_max_pos(t_node *b)
{
	int	i;
	int	len;

	i = 0;
	len = ft_lstlen(b);
	while (i < len)
	{
		if (b->order > b->prev->order)
			return (i);
		b = b->next;
		i++;
	}
	return (-1);
}

//how many rotation required to move n th node to top
int	ft_rx_required(int n, t_node *x)
{
	int	len;
	int	rotate;
	int	rev_rotate;

	len = ft_lstlen(x);
	rotate = n;
	rev_rotate = n - len;
	if (ft_abs(rev_rotate) < rotate)
		return (rev_rotate);
	return (rotate);
}
