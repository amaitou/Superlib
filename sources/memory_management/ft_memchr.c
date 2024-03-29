/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 01:26:56 by amait-ou          #+#    #+#             */
/*   Updated: 2024/01/30 03:20:42 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	t_uc	*p;

	i = 0;
	p = (t_uc *)s;
	while (i < n)
	{
		if (*p == (t_uc)c)
			return ((void *)p);
		++i;
		++p;
	}
	return ((void *)0);
}
