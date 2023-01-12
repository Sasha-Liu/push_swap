/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_order.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:24:04 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 16:35:58 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//initialize the order according to data
//order 1 is the smallest int on the stack
void	ft_set_order(t_node *a)
{
	int		order;
	int		size;
	t_node	*temp;
	
	order = 1;
	size = ft_lstlen(a);
	temp = a;
	

}

//iterate the list and return the min node
//the node->order is init to zero
//the tail->order is set to -1
//a list of n data have n + 1 node 
//(the tail node contains to data)
t_node	*ft_find_min(t_node *a, int size)
{
	int		i;
	t_node	*min;
	
	i = 0;
	min = a;
	while (i <= size)
	{
		if (a->order == 0)
		a = a->next;
	}
	
}