/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:14:08 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/18 15:53:38 by hsliu            ###   ########.fr       */
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
void	ft_sort_three_a(t_stack *stack)
{
	if (ft_lstlen(stack->a) != 3)
		return ;
	if (ft_check_if_sorted(stack->a) == 1)
		return ;
	sa(stack);
}

//sort the list when there are only three item
/*
1 2 3 > sb > 2 1 3 
1 3 2 > sorted
2 1 3 >sorted
2 3 1 > sb
3 1 2 > sb > 1 3 2
3 2 1 
*/
void	ft_sort_three_b(t_stack *stack)
{
	if (ft_lstlen(stack->b) != 3)
		return ;
	if (ft_check_if_rev_sorted(stack->b) == 1)
		return ;
	sb(stack);
}

//return 1 if 
//stack a is already sorted
//stack a only need a couple ra or rra to be sorted
//return 0 if
//otherwise
int	ft_check_if_rev_sorted(t_node *b)
{
	int	len;
	int	i;
	int	max_order;

	len = ft_lstlen(b);
	max_order = ft_max_order(b);
	while (b->order != max_order)
	{
		b = b->next;
	}
	i = 0;
	while (i < len - 1)
	{
		if (b->order < b->next->order)
			return (0);
		b = b->next;
		i++;
	}
	return (1);
}
