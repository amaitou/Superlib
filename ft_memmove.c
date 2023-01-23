/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:10:12 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:07:43 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 	
   we have created "ft_memcpy" but that last doesn't care at all about the 
   overlap as it returns undefined, this my "ft_memmove" has been created to 
   handle this problem.
   in order to copy from a source into a destination there is only three cases

   	case 1:
   		when the "src" and "dst" point at the same block of memory, in this
		case there is no need to perform a copying operation since they are
		the same.
	
	case 2:
		when the "src" is greater than the "dst", in this case you might
		want to use memcpy as an option os just loop over the src and copy
		n elements starting from the beginning.
	
	case 3:
		when the "dst" is greater than "src", here is why "ft_memmove" 
		was made to handle what called "Memory Overlap" where we lost 
		the data by overwriting it. memmove use a temporary memory allocation 
		to store tha data to be copied from "src "to "dst", and since 
		the malloc is forbidden in this part, there is another way to copy 
		from "src" to "dst" without overlaping by using the copying from len 
		to 0 (reversely) and this method is powerful to avoid "Memory Overlaping"
 
 */

#include "./superlib.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	else
		ft_memcpy(d, s, len);
	return ((void *)d);
}
