/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:50:54 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 17:37:52 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stack(t_stack *stack, int n, char **input)
{
	int	*tab;

	ft_init_data(&(stack->a), n, input);
	if (stack->a == NULL)
	{
		write(2, "ft_init_data fails\n", 20);
		return (-1);
	}
	tab = ft_malloc_and_sort(n, input);
	if (tab == NULL)
	{
		write(2, "ft_malloc_and_sort fails\n", 25);
		ft_delete_lst(&(stack->a));
		return (-1);
	}
	if (ft_check_dup(tab, n) == 1)
	{
		write(2, "Error\n", 6);
		ft_delete_lst(&(stack->a));
		free(tab);
		return (-1);
	}
	ft_init_order(stack->a, tab);
	free(tab);
	return (0);
}

//input is an array of strings, each is a valid integer
//n is the size of stack, and array
void	ft_init_data(t_node **head, int n, char **input)
{
	t_node	*node;
	int		i;

	i = n - 1;
	while (i >= 0)
	{
		node = ft_newnode(ft_atoi(input[i]));
		if (node == NULL)
		{
			ft_delete_lst(head);
		}
		ft_push(head, node);
		i--;
	}
}
