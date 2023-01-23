/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:18:14 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:08:49 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./superlib.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	char	*s;
	size_t	i;

	p = (char *)malloc((sizeof(char) * ft_strlen(s1)) + 1);
	s = (char *)s1;
	i = 0;
	if (!p)
		return ((void *)0);
	while (*(s + i))
	{
		*(p + i) = *(s + i);
		++i;
	}
	*(p + i) = '\0';
	return (p);
}
