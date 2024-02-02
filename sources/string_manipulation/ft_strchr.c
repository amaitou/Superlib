/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:34:57 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 11:07:07 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

char	*ft_strchr(const char *s, int32_t c)
{
	char	*p;

	p = (char *)s;
	while (*p && *p != (char)c)
		++p;
	if (*p == (char)c)
		return (p);
	return ((void *)0);
}
