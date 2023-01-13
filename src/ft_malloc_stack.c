/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:06:33 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 16:47:02 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_malloc_stack(t_stack **stack, t_node **a, t_node **b)
{
    *stack = malloc(sizeof(t_stack));
    if (*stack == NULL)
    {
        write(2, "malloc fails\n", 13);
        return (-1);
    }
    *a = ft_create_lst();
    *b = ft_create_lst();
    if (*a == NULL || *b == NULL)
    {
        write(2, "ft_create_lst fails\n", 20);
        free(*a);
        free(*b);
        return (-1);
    }
    (*stack)->a = a;
    (*stack)->b = b;
    return (1);
}

void	ft_free(t_stack **stack)
{
	ft_delete_lst((*stack)->a);
	ft_delete_lst((*stack)->b);
    free(*stack);
    *stack = NULL;
}