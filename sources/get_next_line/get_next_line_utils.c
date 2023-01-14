/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:55:31 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/14 09:57:21 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/superlib.h"

size_t	string_len(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		++i;
	return (i);
}

char	*char_search(char *s, int c)
{
	char	*p;

	if (!s)
		return (0);
	p = (char *)s;
	while (*p && *p != (char)c)
		++p;
	if (*p == (char)c)
		return (p);
	return ((void *)0);
}

char	*string_join(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*p;

	p = (char *)malloc(string_len(s1) + string_len(s2) + 1);
	if (!p)
		return ((void *)0);
	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		p[i] = s1[i];
		++i;
	}
	while (s2[j])
		p[i++] = s2[j++];
	p[i] = '\0';
	free(s1);
	return (p);
}

char	*get_one_line(char *stash)
{
	char	*line;
	int		i;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		++i;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*free_stash(char *reserve)
{
	char	*stash;
	int		i;
	int		j;

	if (!reserve)
		return (NULL);
	i = 0;
	j = 0;
	while (reserve[i] != '\n' && reserve[i])
		++i;
	if (!reserve[i] || (reserve[i] == '\n' && reserve[i + 1] == '\0'))
	{
		free(reserve);
		return (NULL);
	}
	stash = malloc((string_len(reserve) - i));
	if (stash)
	{
		while (reserve[++i])
			stash[j++] = reserve[i];
		stash[j] = '\0';
	}
	free(reserve);
	return (stash);
}
