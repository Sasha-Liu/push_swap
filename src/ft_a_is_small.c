/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_is_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:40:15 by sasha             #+#    #+#             */
/*   Updated: 2023/01/17 13:56:40 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//if a has 3 - 5 item
//then  sort it and return 1
//otherwise return 0 and do no op
//NOTE: if a has 0 - 2 item, it would be sort by ft_a_is_sorted, 
//which is called before this function
int	ft_a_is_small(t_stack *stack)
{
	int	len;

	len = ft_lstlen(stack->a);
    if (len >= 6)
		return (0);
	while (len > 3)
	{
		pb(stack);
		len--;
	}
	ft_sort_three_a(stack);
	ft_push_back(stack);
	ft_a_is_sorted(stack);
	return (1);
}