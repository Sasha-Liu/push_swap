/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:16:44 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 16:41:59 by hsliu            ###   ########.fr       */
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
	int	rotate[2];
	int	ret;
	
	pb(stack);
	pb(stack);
	pb(stack);
	ft_sort_three_a(stack);
	ft_sort_three_b(stack);
	ft_printf("a: ");
	ft_print_lst(stack->a);
	ft_printf("b: ");
	ft_print_lst(stack->b);
	ret = ft_op_required(stack, 0, rotate);
	ft_printf("ret: %d  rotate[]: %d %d\n", ret, rotate[0], rotate[1]);
	ft_exec_op(stack, rotate);
	ft_printf("a: ");
	ft_print_lst(stack->a);
	ft_printf("b: ");
	ft_print_lst(stack->b);
	//test end

	ft_free(&stack);
}
