/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:14:20 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:20:15 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The "ft_split" function returns an array of strings splitted according to
	a particular character.

	The first function I use is "words(const char *s, char c)" which counts
	how many words within a "*s". its main idea is looping over the string 
	and start positioning the pointer step ahead as long as the pointer is equal 
	to the character, once a character doesn't equal the pointer, then this is the 
	first element of the word. and we know the the end of a word when we make 
	the pointer to step ahead to equal the character. once this condition is true, 
	a variable counter will be incremnted by one.
	
	The second function I use is "letters(const char *s, int position, char c)"
	generally ,it counts how many letters are contained within a word according to
	the position of the word as it starts moving the pointer straight ahead and
	increments the pointer by one as long as the pointer is not equal to the "c".

	Thirdly, "allocation(char **p, char const *s, int i, char c)", basically
	this function allocates a block of memory for each word accoring to how
	many letters it has got using the returned result from "letter" function
	in a double pointer that refers to a 2d arrays whee we store our data.


	finally, our hero function which is right here "ft_split(const char *s), int c"
	that allocates a double pointer to help us store our splitted strings using the 
	"words" function that counts the number of words.

	note: if the allocation fails in any piece of code. "NULL" will be returned.
*/

#include "../../includes/superlib.h"

static int	words(const char *s, char c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (*p)
	{
		while (*p == c)
			++p;
		if (*p)
		{
			while (*p && *p != c)
				++p;
			++i;
		}
	}
	return (i);
}

static int	letters(const char *s, int position, char c)
{
	int		i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (*(p + position) && *(p + position) != c)
	{
		++i;
		++position;
	}
	return (i);
}

static char	**allocation(char **p, char const *s, int i, char c)
{
	int	k;
	int	j;

	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] == c)
			++i;
		if (s[i])
		{
			p[j] = (char *)malloc(sizeof(char) * (letters(s, i, c) + 1));
			while (s[i] && s[i] != c)
			{
				if (!p[j])
					return ((void *)0);
				p[j][k++] = s[i];
				++i;
			}
			p[j++][k] = '\0';
		}
	}
	p[j] = (void *)0;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;

	i = 0;
	if (!s)
		return ((void *)0);
	p = (char **)malloc(sizeof(char *) * (words(s, c) + 1));
	if (!p)
		return ((void *)0);
	allocation(p, s, i, c);
	return (p);
}
