/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 01:00:22 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:20:58 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	t_uc	*a;
	t_uc	*b;

	a = (t_uc *)s1;
	b = (t_uc *)s2;
	i = 0;
	while ((*(a + i) || *(b + i)) && i < n)
	{
		if (!(*(a + i) == *(b + i)))
			return (*(a + i) - *(b + i));
		++i;
	}
	return (0);
}
