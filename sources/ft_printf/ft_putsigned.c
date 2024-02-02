/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:10:28 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 10:34:58 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

static int32_t	helper(int32_t nb)
{
	int32_t	i;

	i = 0;
	if (nb <= 0)
		++i;
	while (nb)
	{
		++i;
		nb /= 10;
	}
	return (i);
}

int32_t	ft_putsigned(int32_t nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putsigned(nb * (-1));
	}
	else
	{
		ft_putsigned(nb / 10);
		ft_putsigned(nb % 10);
	}
	return (helper(nb));
}
