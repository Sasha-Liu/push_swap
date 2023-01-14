/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:18:26 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/14 23:32:25 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	ft_swap(int *a, int *b);

static int	ft_partition(int tab[], int start, int end)
//sort the data within tab[start - end]
void	ft_quick_sort(int tab[], int start, int end)
{
	int	pivot;

	if (start >= end)
		return ;
	pivot = ft_partition(tab, start, end);	
	ft_quick_sort(tab, start, pivot - 1);
	ft_quick_sort(tab, pivot + 1, end);
}

//use tab[end] as pivot
//sort in ascending order
static int	ft_partition(int tab[], int start, int end)
{
	int pivot;

	pivot = end;
	end--;
	while (start <= end)
	{
		while (tab[start] < tab[pivot])
			start++;		
		while (tab[end] > tab[pivot])
			end--;
		if (start >= end)
			break;
		ft_swap(tab + start, tab + end);
	}
	ft_swap(tab + pivot, tab + start);
	return (start);
}

static void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
