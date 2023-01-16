/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:06:33 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 12:08:21 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_malloc_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
	{
		write(2, "malloc fails\n", 13);
		return (NULL);
	}
	stack->a = NULL;
	stack->b = NULL;
	return (stack);
}

void	ft_free(t_stack **stack)
{
	ft_delete_lst(&((*stack)->a));
	ft_delete_lst(&((*stack)->b));
	free(*stack);
	*stack = NULL;
}
