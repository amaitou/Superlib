/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_v.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:24:41 by amait-ou          #+#    #+#             */
/*   Updated: 2025/01/25 11:18:38 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	free_v(t_vector *vector)
{
	clear_v(vector);
	free(vector->vector);
	free(vector);
}
