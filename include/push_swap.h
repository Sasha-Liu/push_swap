/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:27:50 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 16:52:13 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H

# include "../lstft/include/lstft.h"
# include "../libftprintf/ft_printf.h"
# include "../libftprintf/libft/libft.h"
//# include <limits.h>

/**********  check input   **********/
int	ft_is_int(int n, char **input);
int	ft_is_number(char *num);
int	ft_is_overflow(char *num);
int	ft_is_underflow(char *num);
int	ft_check_dup(t_node *head);

/**********  initialize stack  **********/
int     ft_malloc_stack(t_stack **stack, t_node **a, t_node **b);
int	    ft_init_stack(t_stack *stack, int n, char **input);
t_node	**ft_init_data(t_node **head, int n, char **input);
void	ft_init_order(t_node *head);

/**********  free resources  **********/
void	ft_free(t_stack **stack);


#endif