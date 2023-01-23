/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:18:49 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:06:31 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 	
 	this function chacks if the given character is a valid 7-bits.
	
	- 7-bits chars are the characters which have 7 bits in their 
	binary representation when they got converted from "ascii" to "binary"

	0   -> 0
	127 -> 1111111

 */

#include "./superlib.h"

int	ft_isascii(int c)
{
	return (c <= 127 && c >= 0);
}
