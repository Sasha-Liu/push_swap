/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:05:14 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/11 21:23:33 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

//if list is not empty, then no action is taken
void	ft_delete_lst(t_node **head)
{
	if (!ft_isempty(*head))
		return ;
	free(*head);
	*head = NULL;
}
