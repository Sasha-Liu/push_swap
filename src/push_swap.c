/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:16:44 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 17:13:49 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	t_node	*a;
	t_node	*b;

	if (!ft_is_int(argc - 1, argv + 1))
	{
		return (0);
	}
	if (ft_malloc_stack(&stack, &a, &b) == -1)
	{
		return (0);
	}
	if (ft_init_stack(stack, argc - 1, argv + 1) == -1)
	{
		ft_free(&stack);
		return (0);
	}
	//sort
	
	ft_print_lst(*(stack->a));
	ft_print_lst(*(stack->b));
	pb(*stack);
	pb(*stack);
	pb(*stack);
	pb(*stack);
	sb(*stack);
	pa(*stack);
	pa(*stack);
	pa(*stack);
	ra(*stack);
	sa(*stack);
	rra(*stack);
	ft_print_lst(*(stack->a));
	ft_print_lst(*(stack->b));
	ft_free(&stack);
}



//check err
//init stack
//sort
//free
