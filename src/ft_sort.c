/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:31:13 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 17:27:03 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//iterate through stack
//use ft_op_required to decide which node to push
//use ft_exec_op to execute
void	ft_sort(t_stack *stack)
{
	int	rotate[2];
	int	len;
	
	len = ft_lstlen(stack->a);
	while (len > 3)
	{
		ft_cheapest_node(stack, rotate);
		ft_print_lst(stack->a);
		ft_print_lst(stack->b);
		ft_printf("rotate: %d %d\n", rotate[0], rotate[1]);
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
