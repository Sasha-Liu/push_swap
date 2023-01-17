/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:59:22 by sasha             #+#    #+#             */
/*   Updated: 2023/01/17 16:30:28 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../lstft/include/lstft.h"
# include "../../libftprintf/ft_printf.h"
# include "../../libftprintf/libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

/**********  ft_init_order.c  **********/
int		*ft_malloc_and_sort(int n, char **input);
int		ft_check_dup(int tab[], int size);
void	ft_init_order(t_node *a, int tab[]);

/**********  ft_init_stack.c  **********/
int		ft_init_stack(t_stack *stack, int n, char **input);
void	ft_init_data(t_node **head, int n, char **input);

/**********  ft_is_int.c  **********/
int		ft_is_int(int n, char **input);
int		ft_is_number(char *num);
int		ft_is_overflow(char *num);
int		ft_is_underflow(char *num);

/**********  ft_malloc_stack.c  **********/
t_stack	*ft_malloc_stack(void);
void	ft_free(t_stack **stack);

/**********  ft_quick_sort.c  **********/
void	ft_quick_sort(int tab[], int start, int end);

/**********  ft_read_input.c  **********/
char	*ft_read_stdin(void);
int	    ft_read(char **input);

/**********  ft_check_input.c  **********/
int	ft_check_input(char **input);
int	ft_parse_input(char *input);

/**********  ft_exec_input.c  **********/
void    ft_exec_input(t_stack *stack, char *input);
void	ft_exec_1(t_stack *stack, char **input);
void	ft_exec_2(t_stack *stack, char **input);
void	ft_exec_3(t_stack *stack, char **input);

/**********  ft_check_res.c  **********/
void	ft_check_res(t_stack *stack);

/**********  ft_check.c  **********/
void    ft_check(t_stack *stack);

#endif