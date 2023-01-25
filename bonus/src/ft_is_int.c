/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:41:38 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/25 14:04:12 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

//return 1 if is int
//return 0 if is not int
//return 0 if no int (no input at all)
int	ft_is_int(int n, char **input)
{
	int		i;
	char	*num;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		num = input[i];
		if (!ft_is_number(num) || ft_is_overflow(num) || ft_is_underflow(num))
		{
			write(2, "Error\n", 6);
			return (0);
		}
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
	if (*num > '9' || *num < '0')
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
	if (*num == '+')
		num++;
	while (*num == '0')
		num++;
	if (ft_strlen(num) > 10)
		return (1);
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
	while (*num == '0')
		num++;
	if (ft_strlen(num) > 10)
		return (1);
	else if (ft_strlen(num) < 10)
		return (0);
	if (ft_strncmp(num, "2147483648", 10) > 0)
		return (1);
	return (0);
}
