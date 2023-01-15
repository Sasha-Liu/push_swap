/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_order.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:58:14 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/15 16:16:46 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_data_order(int data, int tab[], int size);

//sort the integer 
int	*ft_malloc_and_sort(int n, char **input)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * n);
	if (tab == NULL)
	{
		write(2, "malloc fails\n", 13);
		exit(0);
	}
	i = 0;
	while (i < n)
	{
		tab[i] = ft_atoi(input[i]);
		i++;
	}
	ft_quick_sort(tab, 0, n - 1);
	return (tab);
}

int	ft_check_dup(int tab[], int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] == tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}

//size of the array should equal to length of list
void	ft_init_order(t_node *a, int tab[])
{
	int	size;
	int	i;

	size = ft_lstlen(a);
	i = 0;
	while (i < size)
	{
		a->order = ft_data_order(a->data, tab, size);
		a = a->next;
		i++;
	}
}

static int	ft_data_order(int data, int tab[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (data == tab[i])
			return (i + 1);
		i++;
	}
	return (-1);
}
