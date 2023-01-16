/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:16:44 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 13:34:36 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (!ft_is_int(argc - 1, argv + 1))
	{
		return (0);
	}
	stack = ft_malloc_stack();
	if (stack == NULL)
	{
		return (0);
	}
	if (ft_init_stack(stack, argc - 1, argv + 1) == -1)
	{
		ft_free(&stack);
		return (0);
	}
	//test begin
	ft_print_lst(stack->a);
	ft_print_lst(stack->b);
	pb(stack);
	pb(stack);
	pb(stack);
	ft_print_lst(stack->a);
	ft_print_lst(stack->b);
	ft_sort_three_a(stack);
	ft_print_lst(stack->a);
	ft_print_lst(stack->b);
	//test end
	ft_free(&stack);
}
