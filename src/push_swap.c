/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:16:44 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/25 13:58:25 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		n;
	char	**input;
	int		res;

	n = argc - 1;
	input = argv + 1;
	res = ft_set_input(argc, argv, &n, &input);
	if (!ft_is_int(n, input))
	{
		return (0);
	}
	stack = ft_malloc_stack();
	if (stack == NULL)
	{
		return (0);
	}
	if (ft_init_stack(stack, n, input) == -1)
	{
		return (ft_free(&stack), 0);
	}
	ft_sort(stack);
	ft_free(&stack);
	if (res)
		ft_free_2(input);
}
