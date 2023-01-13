/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:41:38 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 12:36:30 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//return 1 if is int
//return 0 if is not int
int	ft_is_int(int n, char **input)
{
	int		i;
	char	*num;

	i = 0;
	while (i < n)
	{
		num = input[i];
		if (!ft_is_number(num))
			return (0);
		else if (ft_is_overflow(num))
			return (0);
		else if (ft_is_underflow(num))
			return (0);
		i++;
	}
	return (1);
}

//number is a series of number (0 - 9) 
//with a single - or + at the begining
//do not accept if the first digit is zero
int	ft_is_number(char *num)
{
	if (*num == '-' || *num == '+')
		num++;
	if (*num == '0' && ft_strncmp(num, "0", 2) != 0)
		return (0);
	while ('0' <= *num && *num <= '9')
		num++;
	if (*num == '\0')
		return (1);
	return (0);
}

//int max : 2147483647
int	ft_is_overflow(char *num)
{
	if (*num == '-')
		return (0);
	if (ft_strlen(num) > 10)
		return(1);
	else if (ft_strlen(num) < 10)
		return (0);
	if (ft_strncmp(num, "2147483647", 10) > 0)
		return (1);
	return (0);
}

//int min : -2147483648
int	ft_is_underflow(char *num)
{
	if (*num != '-')
		return (0);
	num++;
	if (ft_strlen(num) > 10)
		return (1);
	else if (ft_strlen(num) < 10)
		return (0);
	if (ft_strncmp(num, "2147483648", 10) > 0)
		return (1);
	return (0);
}

//return 1 if there are duplicates
//check from head to tail
//the node before head is not checked
int	ft_check_dup(t_node *head)
{
	t_node	*node;

	while (head->order != -1)
	{
		node = head->next;
		while (node->order != -1)
		{
			if (head->data == node->data)
				return (1);
			node = node->next;			
		}
		head = head->next;
	}
	return (0);
}