/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 10:58:18 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/24 12:07:57 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	counword(char const *s, char const c)
{
	int	i;
	int	count;
	int	fl;

	i = 0;
	count = 0;
	fl = 1;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			fl = 1;
		else if (fl)
		{
			count++;
			fl = 0;
		}
		i++;
	}
	return (count);
}

static int	coun(char const *s, int i, char const c)
{
	int	l;

	l = 0;
	while (s[i] && s[i] != c)
	{
		l++;
		i++;
	}
	return (l);
}

static int	put(char **p, int i, char const *s, char const c)
{
	int	j;
	int	jj;

	j = 0;
	jj = 0;
	while (s[i])
	{
		p[jj] = malloc((coun(s, i, c) + 1) * sizeof(char));
		if (!p[jj])
			return (0);
		while (s[i] && s[i] != c)
		{
			p[jj][j] = s[i];
			j++;
			i++;
		}
		p[jj][j] = '\0';
		jj++;
		j = 0;
		while (s[i] == c && s[i])
			i++;
	}
	p[jj] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;

	if (!s)
		return (NULL);
	p = malloc ((counword(s, c) + 1) * sizeof(char *));
	if (!p)
	{
		while (p)
		{
			free(*p);
			p++;
		}
		free(p);
		return (NULL);
	}
	i = 0;
	while (s[i] == c && s[i])
		i++;
	if (!put(p, i, s, c))
		return (NULL);
	return (p);
}
