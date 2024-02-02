/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:06:21 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 10:35:06 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

int32_t	ft_putstr(char *s)
{
	int32_t	i;

	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		++i;
	}
	return (i);
}
