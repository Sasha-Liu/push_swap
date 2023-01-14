/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:38:59 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/14 21:45:18 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

t_node	*ft_newnode(int data)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->data = data;
	new_node->order = 0;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
