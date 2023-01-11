/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:36:48 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/11 22:14:50 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lstft.h"

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
		ft_putnbr_fd(*((int *)head->data), 1);
		write(1, " (", 2);
		ft_putnbr_fd(head->order, 1);
		write(1, ") -> ", 5);
		head = head->next;
		size--;
	}
	write(1, "null", 5);
	head = head->next;
	while (size > 0)
	{	
		ft_putnbr_fd(*((int *)head->data), 1);
		write(1, " (", 2);
		ft_putnbr_fd(head->order, 1);
		write(1, ") -> ", 5);
		head = head->next;
		size--;
	}
	ft_putchar_fd('\n', 1);
}
