/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_v.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 18:28:04 by amait-ou          #+#    #+#             */
/*   Updated: 2025/01/25 11:18:32 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

void	**end_v(t_vector *vector)
{
	void	**end;

	end = vector->vector + size_v(vector);
	return (end);
}
