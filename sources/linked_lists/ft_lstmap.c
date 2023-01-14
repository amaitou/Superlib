/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:02:15 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:19:27 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*h;
	t_list	*t;

	if (!lst)
		return ((void *)0);
	h = ft_lstnew(f(lst->content));
	if (!h)
		return ((void *)0);
	t = h;
	lst = lst->next;
	while (lst)
	{
		t->next = ft_lstnew(f(lst->content));
		if (!t)
			ft_lstclear(&h, del);
		t = t->next;
		lst = lst->next;
	}
	return (h);
}
