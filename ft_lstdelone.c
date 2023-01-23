/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:27:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:07:03 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./superlib.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*t;

	if (!del)
		return ;
	if (lst)
	{
		t = lst;
		del(lst->content);
		free(t);
	}
}
