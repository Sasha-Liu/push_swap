/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:16:39 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 13:32:50 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_order(t_node *a)
{
	int	len;
	int	i;
	int	min;

	len = ft_lstlen(a);
	if (len == 0)
		return (-1);
	i = 0;
	min = a->order;
	while (i < len)
	{
		if (a->order < min)
			min = a->order;
		a = a->next;
		i++;
	}
	return (min);
}

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}
