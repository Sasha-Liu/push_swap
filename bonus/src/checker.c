/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:49:56 by sasha             #+#    #+#             */
/*   Updated: 2023/01/18 17:39:24 by hsliu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		n;
	char	**input;

	n = argc - 1;
	input = argv + 1;
	ft_set_input(argc, argv, &n, &input);
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
		ft_free(&stack);
		return (0);
	}
	ft_check(stack);
	ft_free(&stack);
}
