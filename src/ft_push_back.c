/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:24:33 by sasha             #+#    #+#             */
/*   Updated: 2023/01/18 15:53:01 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//when there are only three items in stack a
//stack a and b are both sorted
//push everything on b to a
void	ft_push_back(t_stack *stack)
{
	int	i;
	int	len;
	int	pos;
	int	rotate_a;

	i = 0;
	len = ft_lstlen(stack->b);
	while (i < len)
	{
		pos = ft_get_pos2(stack->a, stack->b->order);
		rotate_a = ft_rx_required(pos, stack->a);
		ft_rotate_a(stack, rotate_a);
		pa(stack);
		i++;
	}
}

void	ft_rotate_a(t_stack *stack, int rotate)
{
	while (rotate > 0)
	{
		ra(stack);
		rotate--;
	}
	while (rotate < 0)
	{
		rra(stack);
		rotate++;
	}
}

int	ft_get_pos2(t_node *a, int order)
{
	int	min_order;
	int	max_order;

	min_order = ft_min_order(a);
	max_order = ft_max_order(a);
	if (order > max_order || order < min_order)
	{
		return (ft_min_pos(a));
	}
	else
	{
		return (ft_bigger_pos(a, order));
	}
}

//return the position of the node with bigger order
int	ft_bigger_pos(t_node *a, int order)
{
	int	i;
	int	len;

	i = 0;
	len = ft_lstlen(a);
	while (i < len)
	{
		if (a->prev->order < order && a->order > order)
			return (i);
		a = a->next;
		i++;
	}
	return (-1);
}

//return the position of the min node
int	ft_min_pos(t_node *a)
{
	int	i;
	int	len;

	i = 0;
	len = ft_lstlen(a);
	while (i < len)
	{
		if (a->order < a->prev->order)
			return (i);
		a = a->next;
		i++;
	}
	return (-1);
}
