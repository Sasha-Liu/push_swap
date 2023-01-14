/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:59:45 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/14 21:44:48 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"
#include <stdio.h>
int	ft_lstlen(t_node *node)
{
	int		len;
	t_node	*start;

	if (node == NULL)
		return (0);
	len = 1;
	start = node;
	node = node->next;
	while (node != start)
	{
		node = node->next;
		len++;
	}
	return (len);
}
