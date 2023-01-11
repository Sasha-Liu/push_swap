/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:00:05 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/11 22:01:41 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LSTFT_H
# define LSTFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
typedef struct s_node t_node;

//must have a node with data = NULL
//to mark the end and the begining
typedef struct s_node{
    void    *data;
	int		order;
    t_node  *prev;
    t_node  *next;
}t_node;

/********** basic list operation **********/
int		ft_lstlen(t_node *head);
int		ft_isempty(t_node *head);
t_node	*ft_newnode(void *data);
t_node	*ft_create_lst(void);
void	ft_delete_lst(t_node **head);
void	ft_push(t_node **head, t_node *node);
t_node	*ft_pop(t_node **head);

/********** printing function **********/
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_print_lst(t_node *head);

#endif
