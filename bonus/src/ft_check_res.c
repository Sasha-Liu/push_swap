/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_res.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:18:54 by sasha             #+#    #+#             */
/*   Updated: 2023/01/18 16:00:55 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_res(t_stack *stack)
{
	int		i;
	int		len;
	t_node	*a;

	if (!ft_isempty(stack->b))
	{
		write(1, "KO\n", 3);
		return ;
	}
	i = 1;
	len = ft_lstlen(stack->a);
	a = stack->a;
	while (i <= len)
	{
		if (a->order != i)
		{
			write(1, "KO\n", 3);
			return ;
		}
		a = a->next;
		i++;
	}
	write(1, "OK\n", 3);
}
