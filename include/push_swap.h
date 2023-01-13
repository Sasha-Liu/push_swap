/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:27:50 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/13 11:37:00 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H

# include "lstft.h"
# include "ft_printf.h"
# include "libft.h"
//# include <limits.h>

/**********  check input   **********/
int	ft_is_number(char *num);
int	ft_is_overflow(char *num);
int	ft_is_underflow(char *num);
int	ft_check_dup(t_node *head);

/**********  initialize stack  **********/
t_node	*ft_init_data(int n, char **input);
void	ft_init_order(t_node *head);

#endif