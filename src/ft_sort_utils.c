/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:34:26 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/14 17:51:02 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//how many operations does it take, 
//to put the node on the right place on stack b
int	ft_op_needed(t_stack *stack, int i)
{









}

void	ft_sort_three(t_node *a)
{
	int	order_1;
	int	order_2;
	int	order_3;

	order_1 = a->order;
	order_2 = a->next->order;


}

//return 1 if stack a is already sorted
int	ft_is_sorted(t_node *head)
{
	int	order;

	order = 1;
	while (head->order != -1)
	{
		if (head->order != order)
			return (0);
		order++;
		head = head->next;
	}
	return (1);
}


