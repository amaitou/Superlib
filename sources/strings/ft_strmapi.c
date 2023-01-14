/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:37:16 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:20:53 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	t_ui	j;
	char	*p;

	if (!s)
		return ((void *)0);
	i = ft_strlen(s);
	j = 0;
	p = (char *)malloc((sizeof(char) * i) + 1);
	if (!p)
		return ((void *)0);
	while (s[j])
	{
		p[j] = f(j, s[j]);
		++j;
	}
	p[j] = '\0';
	return (p);
}
