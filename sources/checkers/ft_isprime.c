/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 06:14:19 by amait-ou          #+#    #+#             */
/*   Updated: 2024/01/30 06:15:13 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

size_t	ft_isprime(int nb)
{
	int	i;

	i = 2;
	while (i <= (nb / 2))
	{
		if ((nb % i) != 0)
			++i;
		else
			break ;
	}
	i--;
	if (i == (nb / 2))
		return (1);
	return (0);
}
