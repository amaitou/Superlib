/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:55:25 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:06:14 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 
 	"ft_bzero" zeroes the given memory according to "n" bytes which is the number 
	of blocks to be zeroed.
	the function takes a void pointer which must be casted to "unsigned
   	char" since the "ft_bzero" assigns zeroes to the memory byte per byte.

	looping over each block of memory and assign it with zero
	is a traditional way but using ft_memset which performs the same operation
	is more helpful and provide less code.

 */

#include "./superlib.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
