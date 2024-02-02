/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:18:49 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 11:04:22 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	this function chacks if the given character is a valid 7-bits.

	- 7-bits chars are the characters which have 7 bits in their
	binary representation when they got converted from "ascii" to "binary"

	0   -> 0
	127 -> 1111111

 */

#include "../../includes/superlib.h"

int32_t	ft_isascii(int32_t c)
{
	return (c <= 127 && c >= 0);
}
