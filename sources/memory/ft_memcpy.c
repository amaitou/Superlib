/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:37:33 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:17:12 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	t_uc	*s;
	t_uc	*d;

	i = 0;
	s = (t_uc *)src;
	d = (t_uc *)dst;
	if (!s && !d)
		return ((void *)0);
	while (i < n)
	{
		*((t_uc *)d + i) = *(s + i);
		++i;
	}
	return ((void *)d);
}
