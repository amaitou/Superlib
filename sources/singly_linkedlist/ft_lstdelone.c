/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:27:45 by amait-ou          #+#    #+#             */
/*   Updated: 2024/01/30 03:20:03 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

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
