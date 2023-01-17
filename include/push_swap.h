/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:27:50 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/17 13:21:10 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H

# include "../lstft/include/lstft.h"
# include "../libftprintf/ft_printf.h"
# include "../libftprintf/libft/libft.h"
//# include <limits.h>

/**********  ft_is_int.c   **********/
int		ft_is_int(int n, char **input);
int		ft_is_number(char *num);
int		ft_is_overflow(char *num);
int		ft_is_underflow(char *num);

/**********  ft_malloc_stack.c   **********/
t_stack	*ft_malloc_stack(void);
void	ft_free(t_stack **stack);

/**********  ft_init_stack.c   **********/
int		ft_init_stack(t_stack *stack, int n, char **input);
void	ft_init_data(t_node **head, int n, char **input);

/**********  ft_init_order.c   **********/
int		*ft_malloc_and_sort(int n, char **input);
int		ft_check_dup(int tab[], int size);
void	ft_init_order(t_node *a, int tab[]);

/**********  ft_quick_sort.c   **********/
void	ft_quick_sort(int tab[], int start, int end);

/*********  ft_a_is_sorted.c  **********/
int		ft_a_is_sorted(t_stack *stack);
int		ft_check_if_sorted(t_node *a);
void	ft_simple_ra(t_stack *stack);
int		ft_rotate_amount(t_node *a);

/*********  ft_sort_three.c  **********/
void    ft_sort_three_a(t_stack *stack);
void    ft_sort_three_b(t_stack *stack);
int		ft_check_if_rev_sorted(t_node *b);

/*********  ft_op_required.c  **********/
int	ft_op_required(t_stack *stack, int n, int rotate[]);
int	ft_rx_required(int n, t_node *x);
int	ft_get_pos(t_node *b, int order);
int	ft_smaller_pos(t_node *b, int order);
int	ft_max_pos(t_node *b);

/*********  utils.c  **********/
int	ft_min_order(t_node *a);
int	ft_max_order(t_node *a);
int	ft_abs(int a);
int	ft_max(int a, int b);

/*********  ft_exec_op.c  **********/
void	ft_exec_op(t_stack *stack, int rotate[]);

/*********  ft_sort.c  **********/
void    ft_sort(t_stack *stack);
void	ft_sort_middle(t_stack *stack);
void	ft_cheapest_node(t_stack *stack, int rotate[]);

/*********  ft_push_back.c  **********/
void    ft_push_back(t_stack *stack);
void	ft_rotate_a(t_stack *stack, int rotate);
int	    ft_get_pos2(t_node *a, int order);
int	    ft_bigger_pos(t_node *a, int order);
int	    ft_min_pos(t_node *a);

#endif
