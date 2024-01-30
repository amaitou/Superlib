/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:34:53 by amait-ou          #+#    #+#             */
/*   Updated: 2024/01/30 03:19:08 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/superlib.h"

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
