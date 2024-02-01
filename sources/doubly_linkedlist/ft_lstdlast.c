/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:04:59 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/01 07:39:13 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

t_dlist	*ft_lstdlast(t_dlist *lst)
{
	if (!lst)
		return ((void *)0x00);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
