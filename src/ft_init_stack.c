/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:50:54 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 11:36:39 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*ft_next_node(t_node *node);
static t_node	*ft_find_min(t_node *node, int size);

//argv is an array of strings, each is a valid integer
//n is the size of stack, and array
//if n is 0, stack would be empty
t_node	*ft_init_data(int n, char **input)
{
	t_node	*node;
	t_node	*head;
	int		i;

	head = ft_create_lst();
	if (head == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		node = ft_newnode(ft_atoi(input[i]));
		if (node == NULL)
		{
			ft_delete_lst(&head);
			return (NULL);
		}
		ft_push(&head, node);
		i++;
	}
	return (head);
}

//initialize the order according to data
//order 1 is the smallest int on the stack
void	ft_init_order(t_node *head)
{
	int		order;
	int		size;
	t_node	*node;
	
	order = 1;
	size = ft_lstlen(head);
	while (1)
	{
		node = ft_next_node(head);
		if (node == NULL)
			break;
		node = ft_find_min(node, size);
		node->order = order;
		order++;
	}
}

//node is uninitialize, and is the starting point
//the function iterates through the list
//looking for another node with smaller data, and is unitialize 
static t_node	*ft_find_min(t_node *node, int size)
{
	int		i;
	t_node	*min;
	
	i = 0;
	min = node;
	while (i <= size)
	{
		if (node->order == 0 && node->data < min->data)
			min = node;
		i++;
		node = node->next;
	}
	return (min);
}

//look for the next node that's not initialize
//skip tail node who has order -1
//if all is init, return NULL
static t_node	*ft_next_node(t_node *node)
{
	while (node->order != 0)
		node = node->next;
	if (node->order == -1)
		node = node->next;
	while (node->order != 0)
		node = node->next;
	if (node->order == -1)
		return (NULL);
	return (node);
}