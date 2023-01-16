/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_is_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:35:28 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 16:16:19 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//if stack is sorted or only require rotations to be sorted
//then do the require op and return 1
//otherwise 
//do nothing and return 0
int	ft_a_is_sorted(t_stack *stack)
{	
	if (ft_isempty(stack->a))
		return (1);
	if (ft_check_if_sorted(stack->a) == 1)
	{
		ft_simple_ra(stack);
		return (1);
	}
	return (0);
}

//return 1 if 
//stack a is already sorted
//stack a only need a couple ra or rra to be sorted
//return 0 if
//otherwise
int	ft_check_if_sorted(t_node *a)
{
	int	len;
	int	i;
	int	min_order;

	len = ft_lstlen(a);
	min_order = ft_min_order(a);
	while (a->order != min_order)
	{
		a = a->next;
	}
	i = 0;
	while (i < len - 1)
	{
		if (a->order > a->next->order)
			return (0);
		a = a->next;
		i++;
	}
	return (1);
}

//if stack only need a few rra or ra to be sorted
void	ft_simple_ra(t_stack *stack)
{
	int	rotate;

	rotate = ft_rotate_amount(stack->a);
	if (rotate >= 0)
	{
		while (rotate != 0)
		{
			rotate--;
			ra(stack);
		}
	}
	else
	{
		while (rotate != 0)
		{
			rotate++;
			rra(stack);
		}
	}
}

int	ft_rotate_amount(t_node *a)
{
	int	rotate;
	int	rev_rotate;
	int	len;
	int	min_order;

	rotate = 0;
	len = ft_lstlen(a);
	min_order = ft_min_order(a);
	while (a->order != min_order)
	{
		rotate++;
		a = a->next;
	}
	rev_rotate = rotate - len;
	if (ft_abs(rev_rotate) < rotate)
		return (rev_rotate);
	return (rotate);
}
