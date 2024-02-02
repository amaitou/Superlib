/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:19:53 by amait-ou          #+#    #+#             */
/*   Updated: 2024/02/02 11:06:58 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

/*
	"ft_atoi" is the opposite of "ft_itoa" since this one converts from string
	to integer.

	Ps: if you want to know why some of my functions here are static ones.
	feel free to read the comment I wrote in "libft.h"

	the first function is "contain(char *s, int c)" which takes two params,
	the first one is "*s" that is a pointer to an array of characters
	meanwhile, the second is "c" which is a character.
	the main role of the functions is performing a linear search algorithm
	by looping over "s" nTimes and returs true if the "c" was found otherwise
	it returns false.

	the second and third functions are just helpers to detect spaces
	and numbers within my string and both of them rely on the
	"contain(char *s, int c)" fucntion

	here is the formula that would help us convert from "char" to "int"
		integer = integer * 10 + character - 48

	we assign the "s" with "1" this variable helps us detect
	if the there is a negative sign within the "str" parameter if so
	that "1" would be "-1" and the result at the end would be
	negative.

	whenever there is a space the pointer will be one step ahead

	if the sign is negative and equal to '-' the "s" wil be "-1"
	as mentioned before

	finally, perform the formula on the first set of numbers and return
	an integer (result * sign)

 */

static int32_t	contain(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		++s;
	}
	return (0);
}

static int32_t	spaces(char c)
{
	return (contain("\t\n\v\f\r ", c));
}

static int32_t	signs(char c)
{
	return (contain("-+", c));
}

int32_t	ft_atoi(const char *str)
{
	char	*p;
	int32_t	s;
	int32_t	r;

	p = (char *)str;
	s = 1;
	r = 0;
	while (spaces(*p))
		++p;
	if (signs(*p))
	{
		if (*p == '-')
			s *= -1;
		++p;
	}
	while (*p >= '0' && *p <= '9')
	{
		r = r * 10 + *p - 48;
		++p;
	}
	return (r * s);
}
