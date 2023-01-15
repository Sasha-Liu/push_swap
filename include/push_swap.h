/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:27:50 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/15 16:13:06 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H

# include "../lstft/include/lstft.h"
# include "../libftprintf/ft_printf.h"
# include "../libftprintf/libft/libft.h"
//# include <limits.h>

/**********  check input   **********/
int		ft_is_int(int n, char **input);
int		ft_is_number(char *num);
int		ft_is_overflow(char *num);
int		ft_is_underflow(char *num);
int		*ft_malloc_and_sort(int n, char **input);
void	ft_quick_sort(int tab[], int start, int end);
int		ft_check_dup(int tab[], int size);

/**********  initialize stack  **********/
t_stack	*ft_malloc_stack(void);
int	    ft_init_stack(t_stack *stack, int n, char **input);
void	ft_init_data(t_node **head, int n, char **input);
void	ft_init_order(t_node *a, int tab[]);

/**********  free resources  **********/
void	ft_free(t_stack **stack);

/*********  sort  **********/
//int	ft_is_sorted(t_node *head);


#endif
