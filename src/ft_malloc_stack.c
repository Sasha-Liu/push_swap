/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:06:33 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/14 23:46:26 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_malloc_stack(t_stack **stack)
{
	*stack = malloc(sizeof(t_stack));
	if (*stack == NULL)
	{
		write(2, "malloc fails\n", 13);
		return (-1);
	}
	(*stack)->a = NULL;
	(*stack)->b = NULL;
	return (1);
}

void	ft_free(t_stack **stack)
{
	ft_delete_lst((*stack)->a);
	ft_delete_lst((*stack)->b);
	free(*stack);
	*stack = NULL;
}
