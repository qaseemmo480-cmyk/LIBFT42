/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:03:22 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/27 10:04:25 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_set(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	put(int l, int r, const char *s1, char *p)
{
	int		i;

	i = 0;
	while (s1[i] && l <= r)
	{
		p[i] = s1[l];
		i++;
		l++;
	}
	p[i] = '\0';
}

static int	com(int l, int	*r, char const *s1, char const	*set)
{
	int	siz;

	siz = 0;
	*r = ft_strlen(s1) - 1;
	while (*r >= l)
	{
		if (!is_set(s1[*r], set))
			break ;
		(*r)--;
	}
	if (l > *r)
		siz = 0;
	else
		siz = *r - l + 1;
	return (siz);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		siz;
	int		l;
	int		r;

	siz = 0;
	l = 0;
	r = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[l])
	{
		if (!is_set(s1[l], set))
			break ;
		l++;
	}
	siz = com(l, &r, s1, set);
	p = malloc (siz + 1);
	if (!p)
		return (NULL);
	put (l, r, s1, p);
	return (p);
}
