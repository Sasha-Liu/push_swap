/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:34:26 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 17:47:32 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//return 1 if stack a is already sorted
int	ft_is_sorted(t_node *head)
{
	int	order;

	order = 1;
	while (head->order != -1)
	{
		if (head->order != order)
			return (0);
		order++;
		head = head->next;
	}
	return (1);
}


