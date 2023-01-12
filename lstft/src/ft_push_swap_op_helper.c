/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_op_helper.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:30:47 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 15:45:30 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

//swap a swap b
//swap the first two elements of stack
void	swap(t_node **a)
{
	t_node	*node1;
	t_node	*node2;

	if (ft_lstlen(*a) < 2)
		return ;
	node1 = ft_pop(a);
	node2 = ft_pop(a);
	ft_push(a, node1);
	ft_push(a, node2);
}

//push a push b
//pop from one and push to another
void	push(t_node **a, t_node **b)
{
	t_node	*node;

	node = ft_pop(b);
	ft_push(a, node);
}

void	rotate(t_node **a)
{
	*a = (*a)->next;
	if ((*a)->order == -1)
		*a = (*a)->next;
}

void	rev_rotate(t_node **a)
{
	*a = (*a)->prev;
	if ((*a)->order == -1)
		*a = (*a)->prev;
}
