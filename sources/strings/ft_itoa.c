/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:42:35 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:20:09 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 
 	"ft_itoa" is the opposite of "ft_atoi" because "ft_itoa" converts the number
	from integer to string.
	
	first of all let's count how many digits within "nb", that's what
	the function "len_num(long int nb)" does as it checks if "nb"
	is negative to consider the sign '-' or "0" as a characters otherwise
	it counts how many digits by dividing the "nb" with 10 and
	returns the result

	why "long int" and not "int"?
		simply because "int overflow" must be handled in case the parameter "n"
		is equal or greater than "-2147483647" because "int" is (32-bit) and "long"
		is (64-bit)
	
	ft_itoa creates a variable "nb" to allocate "n" in an enough memory
	then allocates the proper size based on the result that comes from 
	"len_num(int n)" and if the allocations fails "NULL" will be returned.

	the function returns a string so putting "NULL Character" is necessary to
	indicate the end of string that's why we put it in "p[i]" since "i" holds
	the size of the allocated memory.

	in case "n" == 0 only one memory will be allocated and will hold 0.

	if nb < 0 I put '-' at the beginning of the string because '-' has been
	counted as a character in "len_num(long int nb)" then I convert the "nb" to 
	positive integer to perform the operation of converting each digit into 
	character starting from the end of "n".

 
 */

#include "../../includes/superlib.h"

static int	len_num(long int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		nb *= (-1);
		++i;
	}
	while (nb > 0)
	{
		++i;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*p;
	int			i;

	nb = n;
	i = len_num(nb);
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	p[i] = '\0';
	if (nb == 0)
		p[0] = '0';
	else if (nb < 0)
	{
		p[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		--i;
		p[i] = (nb % 10) + 48;
		nb /= 10;
	}
	return (p);
}
