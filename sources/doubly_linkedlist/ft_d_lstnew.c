/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 05:58:20 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/01 06:47:05 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

t_dlist	*ft_d_lstnew(void *content)
{
	t_dlist	*new;

	new = (t_dlist *)malloc(sizeof(t_dlist));
	if (!new)
		return ((void *)0x00);
	new->content = content;
	new->next = (void *)0x00;
	new->prev = (void *)0x00;
	return (new);
}
