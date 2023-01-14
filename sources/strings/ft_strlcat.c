/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:21:08 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:20:40 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

/*

  	the only three conditions you have to take care of are :
		- both of dst and dstsize are NULL = return NULL
 		- dstsize <= dst = src + dstsize
	   	- dstsize > dst  = src + dst (copying)
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	if (!dst && !dstsize)
		return (0);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize <= d)
		return (s + dstsize);
	dst += d;
	ft_strlcpy(dst, src, (dstsize - d));
	return (d + s);
}
