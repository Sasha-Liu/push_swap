/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:49:53 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 10:55:55 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	ft_push(t_node **head, t_node *node)
{
	t_node	*first;
	t_node	*last;
	int		size;

	size = ft_lstlen(*head);
	first = *head;
	last = first->prev;
	if (size == 0)
	{
		node->next = first;
		node->prev = first;
		first->next = node;
		first->prev = node;
	}
	else
	{
		node->next = first;
		node->prev = last;
		first->prev = node;
		last->next = node;
	}
	*head = node;
}
