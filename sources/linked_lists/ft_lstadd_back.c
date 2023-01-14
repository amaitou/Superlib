/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:55:25 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:18:58 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	"ft_lstadd_back" adds a node at the end of the linked list
	that's why we have to achieve the last node which its next is "NULL" then
	add the new node to its next.
	
	if the linked list is empty then the node that we are atteempting to add 
	would be the first one.
*/

#include "../../includes/superlib.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	lastnode = ft_lstlast(*lst);
	if (*lst)
		lastnode->next = new;
	else
		*lst = new;
}
