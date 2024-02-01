/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:26:59 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/01 06:46:58 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	ft_d_clear(t_dlist **lst)
{
	t_dlist	*temp;

	temp = *lst;
	while (temp)
	{
		temp = *lst;
		free(temp->content);
		*lst = (*lst)->next;
		free(temp);
	}
	*lst = (void *)0x00;
}
