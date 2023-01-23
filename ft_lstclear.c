/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:08:13 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:06:58 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./superlib.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (!del || !lst)
		return ;
	while ((*lst) != NULL)
	{
		t = *lst;
		del((*lst)->content);
		((*lst)) = (*lst)->next;
		free(t);
	}
	*lst = NULL;
}
