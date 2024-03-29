/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:36:48 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/14 21:50:37 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

static void	ft_print_node(t_node *node);

//print the data and the order in paranthese
void	ft_print_lst(t_node *lst)
{
	int	size;

	size = ft_lstlen(lst);
	if (size == 0)
	{
		write(1, "empty\n", 6);
		return ;
	}
	while (size > 0)
	{
		ft_print_node(lst);
		lst = lst->next;
		size--;
	}
	write(1, "\n", 1);
}

static void	ft_print_node(t_node *node)
{
	ft_putnbr_fd(node->data, 1);
	write(1, " (", 2);
	ft_putnbr_fd(node->order, 1);
	write(1, ") -> ", 5);
}
