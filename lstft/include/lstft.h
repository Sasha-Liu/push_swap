/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:00:05 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/12 15:35:00 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LSTFT_H
# define LSTFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node	t_node;
typedef struct s_stack	t_stack;
//must have a node with data = -1, order = -1
//to mark the end and the begining
typedef struct s_node{
	int		data;
	int		order;
	t_node	*prev;
	t_node	*next;
}t_node;

typedef struct s_stack{
	t_node	**a;
	t_node	**b;
}t_stack;

/********** basic list operation **********/
int		ft_lstlen(t_node *head);
int		ft_isempty(t_node *head);
t_node	*ft_newnode(int data);
t_node	*ft_create_lst(void);
void	ft_delete_lst(t_node **head);
void	ft_push(t_node **head, t_node *node);
t_node	*ft_pop(t_node **head);

/********** printing function **********/
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_print_lst(t_node *head);

/**********  push swap opration helper  **********/
void	swap(t_node **a);
void	push(t_node **a, t_node **b);
void	rotate(t_node **a);
void	rev_rotate(t_node **a);

/**********  push swap opration  **********/
void	sa(t_stack stack);
void	sb(t_stack stack);
void	ss(t_stack stack);
void	pa(t_stack stack);
void	pb(t_stack stack);
void	ra(t_stack stack);
void	rb(t_stack stack);
void	rr(t_stack stack);
void	rra(t_stack stack);
void	rrb(t_stack stack);
void	rrr(t_stack stack);

#endif
