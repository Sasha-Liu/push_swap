/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:41:38 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 16:38:43 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//number is a series of number (0 - 9) 
//with a single - or + at the begining
//do not accept if the first digit is zero
int	ft_is_number(char *num)
{
	if (*num == '-' || *num == '+')
		num++;
	if (*num == '0')
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
	else if (ft_strlen(num < 10))
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
int	ft_check_dup()
{
	
}