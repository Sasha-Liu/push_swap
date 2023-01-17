/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:31:13 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/17 13:22:55 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_sort(t_stack *stack)
{
	if (ft_a_is_sorted(stack))
		return ;
	pb(stack);
	pb(stack);
	pb(stack);
	ft_sort_three_b(stack);
	ft_sort_middle(stack);
	ft_sort_three_a(stack);
	ft_push_back(stack);
	ft_a_is_sorted(stack);
}

//iterate through stack
//use ft_op_required to decide which node to push
//use ft_exec_op to execute
void	ft_sort_middle(t_stack *stack)
{
	int	rotate[2];
	int	len;
	
	len = ft_lstlen(stack->a);
	while (len > 3)
	{
		ft_cheapest_node(stack, rotate);
		ft_exec_op(stack, rotate);
		len--;
	}
}

//search for the cheapest node to push
//put the result in rotate array
void	ft_cheapest_node(t_stack *stack, int rotate[])
{
	int	len;
	int	min;
	int	i;
	int	temp;
	int	buffer[2];

	len = ft_lstlen(stack->a);
	min = ft_op_required(stack, 0, rotate);
	i = 1;
	while (i < len)
	{
		temp = ft_op_required(stack, i, buffer);
		if (temp < min)
		{
			min = temp;
			rotate[0] = buffer[0];
			rotate[1] = buffer[1];
		}
		i++;
	}
}
