/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 00:37:53 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:21:11 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = ft_strlen(s);
	while (i && *(p + i) != (char)c)
		--i;
	if (*(p + i) == (char)c)
		return (p + i);
	return ((void *)0);
}
