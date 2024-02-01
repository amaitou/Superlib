/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_delone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 07:15:11 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/01 07:30:24 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	ft_d_delone(t_dlist *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		free(lst->content);
		free(lst);
	}
}
