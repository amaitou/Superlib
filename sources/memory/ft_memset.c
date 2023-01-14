/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:41:37 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:17:32 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	*ft_memset(void *b, int c, size_t len)
{
	t_uc	*p;
	size_t	i;

	p = (t_uc *)b;
	i = 0;
	while (i < len)
	{
		*(p + i) = (t_uc)c;
		++i;
	}
	return ((void *)b);
}
