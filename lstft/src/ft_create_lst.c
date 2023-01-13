/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:44:18 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 10:36:18 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

t_node	*ft_create_lst(void)
{
	t_node	*tail;

	tail = ft_newnode(-1);
	if (tail == NULL)
		return (NULL);
	tail->order = -1;
	tail->prev = tail;
	tail->next = tail;
	return (tail);
}
