/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:55:25 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:19:02 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	it is so simple to add a node at the beginning of a linked list. 
	since we have the "head" it is like adding the node in the back of
	the "head"
	as the next of the node will be "head" and the head will be the node
	itself

*/

#include "../../includes/superlib.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
