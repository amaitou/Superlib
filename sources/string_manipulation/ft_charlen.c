/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:34:53 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 10:39:51 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

int32_t	ft_charlen(char *s, int32_t c)
{
	int32_t	iterator;
	int32_t	counter;

	iterator = 0;
	counter = 0;
	while (s[iterator])
	{
		if (s[iterator] == (char)c)
			++counter;
		++iterator;
	}
	return (counter);
}
