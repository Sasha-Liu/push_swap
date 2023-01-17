/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:49:56 by sasha             #+#    #+#             */
/*   Updated: 2023/01/17 15:12:18 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	//ft_check;
	//show result
	ft_free(&stack);
}
