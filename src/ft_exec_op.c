/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:27:05 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/16 16:40:08 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate_together(t_stack *stack, int rotate[]);
static void	ft_rotate_alone(t_stack *stack, int rotate[]);

//rotate[] has the info needed to perform op
//if rotate[0] == 10, then 10 times ra
//if rotate[0] == -3, then 3 times rra
//rotate[1] is for rb or rrb
//then pb
void	ft_exec_op(t_stack *stack, int rotate[])
{
	ft_rotate_together(stack, rotate);
	ft_rotate_alone(stack, rotate);
	pb(stack);
}

static void	ft_rotate_together(t_stack *stack, int rotate[])
{
	while (rotate[0] < 0 && rotate[1] < 0)
    {
		rotate[0]++;
        rotate[1]++;
        rrr(stack);
    }
    while (rotate[0] > 0 && rotate[1] > 0)
    {	
		rotate[0]--;
		rotate[1]--;
		rr(stack);
    }
}

static void	ft_rotate_alone(t_stack *stack, int rotate[])
{
	while (rotate[0] > 0)
	{
		rotate[0]--;
		ra(stack);
	}
	while (rotate[0] < 0)
	{
		rotate[0]++;
		rra(stack);
	}
    while (rotate[1] > 0)
	{
		rotate[1]--;
		rb(stack);
	}
	while (rotate[1] < 0)
	{
		rotate[1]++;
		rrb(stack);
	}
}