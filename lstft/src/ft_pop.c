/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:09:15 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 10:55:47 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

//return null if empty
t_node	*ft_pop(t_node **head)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (ft_isempty(*head))
		return (NULL);
	first = *head;
	second = first->next;
	last = first->prev;
	second->prev = last;
	last->next = second;
	*head = second;
	return (first);
}
