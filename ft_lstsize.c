/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:59:03 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:07:24 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	This is a linked list, so if you want to count te size of this linked
	list, you have to achieve the last node wich is "NULL" and increment
	the counter by one in each move to the next

*/

#include "./superlib.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != (void *)0)
	{
		++i;
		lst = lst->next;
	}
	return (i);
}
