/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:00:05 by hsliu             #+#    #+#             */
/*   Updated: 2023/01/10 14:03:38 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LSTFT_H
# define LSTFT_H

//must have a node with data = NULL
//to mark the end and the begining
typedef struct s_node{
    void    *data;
    t_node  *prev;
    t_node  *next;
}t_node;




#endif