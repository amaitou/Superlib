/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 06:25:50 by amait-ou          #+#    #+#             */
/*   Updated: 2024/01/30 03:20:33 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	the only two things we know before creating a node are:
		- the content of the node is void pointer (this will allow us to store 
		any kind of data)
		- the next of this node is a pointer which points to NULL
	first of all, we have to allocate a memory for our new node using the malloc 
	function, and if allocation fails, "NULL" will be returned.
	after the allocation we assign the parameter of the function to the new 
	node's content meanwhile its next will be "NULL" (mostly it is the last node)

*/

#include "../../includes/superlib.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return ((void *)0);
	node->content = content;
	node->next = (void *)0;
	return (node);
}
