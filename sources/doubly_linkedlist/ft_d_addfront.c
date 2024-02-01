/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_addfront.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:19:15 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/01 06:46:55 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	ft_d_addfront(t_dlist **lst, t_dlist *new)
{
	t_dlist	*temp;

	temp = *lst;
	if (temp)
	{
		temp->prev = new;
		new->next = temp;
		*lst = new;
		return ;
	}
	*lst = new;
}
