/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:59:03 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 10:38:44 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	This is a linked list, so if you want to count te size of this linked
	list, you have to achieve the last node wich is "NULL" and increment
	the counter by one in each move to the next

*/

#include "../../includes/superlib.h"

int32_t	ft_lstsize(t_list *lst)
{
	int32_t	i;

	i = 0;
	while (lst != (void *)0)
	{
		++i;
		lst = lst->next;
	}
	return (i);
}
