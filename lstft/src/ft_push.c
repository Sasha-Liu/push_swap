/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:49:53 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/14 21:51:07 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	ft_push(t_node **head, t_node *node)
{
	t_node	*first;
	t_node	*last;

	if (*head == NULL)
	{
		node->next = node;
		node->prev = node;
		*head = node;
		return ;
	}
	first = *head;
	last = first->prev;
	node->next = first;
	node->prev = last;
	last->next = node;
	first->prev = node;
	*head = node;
}
