/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:28:02 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 11:04:04 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	This function returns true if the given character is alphanumeric
	(either number or alphabet)

	since we have created the ft_isdigit() and ft_isalpha() functions
	I use them right here to check

*/

#include "../../includes/superlib.h"

int32_t	ft_isalnum(int32_t c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
