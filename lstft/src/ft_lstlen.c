/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:59:45 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/11 17:37:45 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

int	ft_lstlen(t_node *head)
{
	int	i;

	i = 0;
	while (head->data != NULL)
	{
		head = head->next;
	}
	head = head->next;
	while (head->data != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}
