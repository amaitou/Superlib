/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:34:53 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:22:20 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./superlib.h"

int	ft_charlen(char *s, int c)
{
	int	iterator;
	int	counter;

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
