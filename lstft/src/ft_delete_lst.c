/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:05:14 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 11:26:34 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	ft_delete_lst(t_node **head)
{
	t_node	*curr;
	t_node	*next;
	int		size;

	curr = *head;
	size = ft_lstlen(curr);
	while (size >= 0)
	{
		next = curr->next;
		free(curr);
		curr = next;
		size--;
	}
	*head = NULL;
}
