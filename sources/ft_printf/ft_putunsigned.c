/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:19:12 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 10:35:11 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

static int32_t	helper(t_ui nb)
{
	int32_t	i;

	i = 0;
	if (nb == 0)
		++i;
	while (nb)
	{
		++i;
		nb /= 10;
	}
	return (i);
}

int32_t	ft_putunsigned(t_ui nb)
{
	if (nb > 0 && nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putunsigned(nb / 10);
		ft_putunsigned(nb % 10);
	}
	return (helper(nb));
}
