/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:16:44 by hsliu             #+#    #+#             */
/*   Updated: 2023/02/13 11:17:55 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_input(int res, char **input)
{
	if (res)
	{
		ft_free_2(input);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		n;
	char	**input;
	int		res;

	n = argc - 1;
	input = argv + 1;
	res = ft_set_input(argc, argv, &n, &input);
	if (input == NULL)
		return (0);
	if (!ft_is_int(n, input))
		return (ft_free_input(res, input), 0);
	stack = ft_malloc_stack();
	if (stack == NULL)
	{
		return (ft_free_input(res, input), 0);
	}
	if (ft_init_stack(stack, n, input) == -1)
	{
		return (ft_free(&stack), ft_free_input(res, input), 0);
	}
	ft_sort(stack);
	ft_free(&stack);
	ft_free_input(res, input);
}
