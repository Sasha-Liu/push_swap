/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:44:18 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/11 17:47:10 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

t_node	*ft_create_lst(void)
{
	t_node	*head;

	head = ft_newnode(NULL);
	if (head == NULL)
		return (NULL);
	head->prev = head;
	head->next = head;
	return (head);
}
