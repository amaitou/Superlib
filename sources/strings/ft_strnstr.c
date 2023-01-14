/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:11:30 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:21:04 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	if (!h && !len)
		return (NULL);
	if (!*n)
		return (h);
	while (*h && len)
	{
		j = 0;
		while (h[j] == n[j] && j < len && h[j])
			++j;
		if (!n[j])
			return (h);
		++h;
		--len;
	}
	return ((void *)0);
}
