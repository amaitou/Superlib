/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma    		+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 04:12:17 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/06 22:09:09 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

static int	isin(char c, char const *s)
{
	char	*p;

	p = (char *)s;
	while (*p)
	{
		if (*p == c)
			return (1);
		++p;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		last;
	char	*p;

	if (!s1)
		return ((void *)0);
	last = ft_strlen(s1) - 1;
	begin = 0;
	p = (char *)s1;
	while (p[begin] && isin(p[begin], set))
		++begin;
	while (last > 0 && isin(p[last], set))
		last--;
	if (last < begin)
		return (ft_substr(p, begin, 0));
	return (ft_substr(p, begin, (last - begin) + 1));
}
