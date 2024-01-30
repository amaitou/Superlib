/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __cvector_utils__.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 06:05:57 by amait-ou          #+#    #+#             */
/*   Updated: 2024/01/30 03:18:42 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/superlib.h"

size_t	__size_v(t_vector *vector)
{
	return (vector->size);
}

void	__free_v(t_vector *vector)
{
	__clear_v(vector);
	free(vector->vector);
	free(vector);
}

int	__empty_v(t_vector *vector)
{
	return (!vector->size);
}

void	*__front_v(t_vector *vector)
{
	if (!__empty_v(vector))
		return (vector->vector[0]);
	return ((void *)0x00);
}

void	*__back_v(t_vector *vector)
{
	if (!__empty_v(vector))
		return (vector->vector[__size_v(vector) - 1]);
	return ((void *)0x00);
}