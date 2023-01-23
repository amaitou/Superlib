/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:24:19 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:08:59 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./superlib.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	if (!s1 || !s2)
		return ((void *)0);
	p = (char *)malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2))) + 1);
	if (!p)
		return ((void *)0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		++i;
	}
	while (s2[j])
	{
		p[i] = s2[j];
		++j;
		++i;
	}
	p[i] = '\0';
	return (p);
}
