/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:35:18 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:22:28 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./superlib.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		++i;
	}
	if (s1[i])
		return (s1[i]);
	else if (s2[i])
		return (-s2[i]);
	else
		return (0);
}
