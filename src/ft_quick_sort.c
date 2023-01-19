/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:18:26 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/19 11:12:34 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_bigger(int a, int b);
static void	ft_swap(int *a, int *b);
static int	ft_partition(int tab[], int start, int end);

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
	int	pivot;

	pivot = end;
	end--;
	while (start <= end)
	{
		while (ft_bigger(tab[pivot], tab[start]))
			start++;
		while (end >= 0 && ft_bigger(tab[end], tab[pivot]))
			end--;
		if (start >= end)
			break ;
		ft_swap(tab + start, tab + end);
	}
	ft_swap(tab + pivot, tab + start);
	return (start);
}

static int	ft_bigger(int a, int b)
{
	if (a > 0 && b < 0)
		return (1);
	if (a < 0 && b > 0)
		return (0);
	return (a > b);
}

static void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
