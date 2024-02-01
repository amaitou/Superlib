/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstddelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 07:15:11 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/01 07:38:14 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	ft_lstddelone(t_dlist *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		free(lst->content);
		free(lst);
	}
}
