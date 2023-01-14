/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:26:05 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/14 18:29:44 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

void	ft_delete_lst(t_node **lst)
{
	t_node	*node;
	t_node	*next;
	int		size;
	
	if (*lst == NULL)
		return ;
	node = *lst;
	size = ft_lstlen(*lst);
	while (size > 0)
	{
		next = node->next;
		free(node);
		node = next;
		size--;
	}
	*lst = NULL;
}
