/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:28:02 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:21:39 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	This function returns true if the given character is alphanumeric
	(either number or alphabet)

	since we have created the ft_isdigit() and ft_isalpha() functions
	I use them right here to check

*/

#include "../../includes/superlib.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
