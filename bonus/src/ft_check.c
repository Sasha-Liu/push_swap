/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:24:30 by sasha             #+#    #+#             */
/*   Updated: 2023/01/18 17:41:08 by hsliu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check(t_stack *stack)
{
	char	*input;

	input = ft_read_stdin();
	if (ft_check_input(&input) == -1)
		return ;
	ft_exec_input(stack, input);
	free(input);
	ft_check_res(stack);
	return ;
}
