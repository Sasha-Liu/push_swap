/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:28:12 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 13:09:04 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sort the list when there are only three item
/*
1 2 3 > is_sorted
1 3 2 > 3 1 2
2 1 3 > 1 2 3
2 3 1 > is_sorted
3 1 2 > is_sorted
3 2 1 > 2 3 1
*/

void    ft_sort_three_a(t_stack *stack)
{
	if (ft_lstlen(stack->a) != 3)
		return ;
	if (ft_is_sorted(stack, stack->a, ft_simple_ra) == 1)
		return ;
	sa(stack);
	ft_is_sorted(stack, stack->a, ft_simple_ra);
}

void    ft_sort_three_b(t_stack *stack)
{
	if (ft_lstlen(stack->b) != 3)
		return ;
	if (ft_is_sorted(stack, stack->b, ft_simple_rb) == 1)
		return ;
	sb(stack);
	ft_is_sorted(stack, stack->b, ft_simple_rb);
}