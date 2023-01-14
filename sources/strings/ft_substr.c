/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:34:51 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:21:22 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	"ft_substr" finds a string starting from the param "start"
	and allocates the found string according to "len" + 1 for the 
	"\0".

	firstly the function checks is the given pointer "s" is "NULL" to stop
	the processes since there is no nedd to allocate a string from "NULL".

	there are 3 cases to locate a substring within a string :
		ft_strlen(s) <= start :
			in this case the the only thing to be allocated is '\0'
			as there is nothng else to e allocated because the len is out of
			the string

		len >= ft_strlen(s):
			this case is more related to memory wasting.
			let's suppose that you have string contained from 16 characters,
			len is 30 and start is 6 
			since you have to allocate only 10 characters why would you allocate
			30 characters and most of them would be unsused. that's why I've used
			"ft_strdup".

		otherwise
			either make loop that goes over the string and copies from the "src"
			to the "pointer" or use directly "ft_strlcpy"

*/

#include "../../includes/superlib.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*p;

	if (!s)
		return ((void *)0);
	if (ft_strlen(s) <= start)
		return (ft_calloc(sizeof(char), 1));
	if (len >= (ft_strlen(s) - start))
		return (ft_strdup(s + start));
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return ((void *)0);
	ft_strlcpy(p, s + start, len + 1);
	return (p);
}
