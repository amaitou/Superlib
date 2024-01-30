/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 06:05:17 by amait-ou          #+#    #+#             */
/*   Updated: 2024/01/30 06:05:43 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/superlib.h"

void	ft_swap(void **a, void **b)
{
	void	*_x;

	_x = *a;
	*a = *b;
	*b = _x;
}
