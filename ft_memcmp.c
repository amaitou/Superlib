/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:57:19 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:07:33 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./superlib.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_uc	*a;
	t_uc	*b;
	size_t	i;

	i = 0;
	a = (t_uc *)s1;
	b = (t_uc *)s2;
	while (i < n)
	{
		if (!(*a == *b))
			return (*a - *b);
		++i;
		++a;
		++b;
	}
	return (0);
}
