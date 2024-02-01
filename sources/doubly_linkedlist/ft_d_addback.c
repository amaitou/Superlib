/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_addback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:05:36 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/01 06:46:48 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	ft_d_addback(t_dlist **lst, t_dlist *new)
{
	t_dlist	*last;

	last = ft_d_last(*lst);
	if (last)
	{
		last->next = new;
		new->prev = last;
		return ;
	}
	*lst = new;
}
