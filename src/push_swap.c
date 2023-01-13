/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:16:44 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 17:45:28 by hsliu            ###   ########.fr       */
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
	//test begin
	if (ft_is_sorted(*(stack->a)) == 1)
		ft_printf("is sorted\n");
	//test end
	ft_free(&stack);
}
