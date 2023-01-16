/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:28:12 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 15:28:30 by hsliu            ###   ########.fr       */
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
	if (ft_a_is_sorted(stack) == 1)
		return ;
	sa(stack);
	ft_a_is_sorted(stack);
}

void	ft_sort_three_b(t_stack *stack)
{

	
}
