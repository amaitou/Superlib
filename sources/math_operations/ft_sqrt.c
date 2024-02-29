/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 06:16:04 by amait-ou          #+#    #+#             */
/*   Updated: 2024/01/30 06:16:29 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

size_t	ft_sqrt(int nb)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (res <= nb && i < 46341)
	{
		res = i * i;
		if (res == nb)
			return (i);
		++i;
	}
	return (0);
}
