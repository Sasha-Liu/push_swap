/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:36:48 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 10:58:12 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

static void	ft_print_node(t_node *node);

//print the data and the order in paranthese
void	ft_print_lst(t_node *head)
{
	int	size;

	size = ft_lstlen(head);
	if (size == 0)
	{
		write(1, "List is empty\n", 15);
		return ;
	}
	while (head->data)
	{
		ft_print_node(head);
		head = head->next;
		size--;
	}
	write(1, "null", 5);
	head = head->next;
	while (size > 0)
	{	
		ft_print_node(head);
		head = head->next;
		size--;
	}
	ft_putchar_fd('\n', 1);
}

static void	ft_print_node(t_node *node)
{
	ft_putnbr_fd(*((int *)node->data), 1);
	write(1, " (", 2);
	ft_putnbr_fd(node->order, 1);
	write(1, ") -> ", 5);
}
