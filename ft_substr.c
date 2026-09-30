/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 15:54:23 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/27 10:03:32 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	put(int i, int len, char const *s, char *c)
{
	int	j;

	j = 0;
	while (j < len)
	{
		c[j] = s[i];
		j++;
		i++;
	}
	c[j] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*c;
	size_t		i;
	size_t		siz;

	i = 0;
	siz = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (i == start)
			break ;
		i++;
	}
	if (siz < start)
		len = 0;
	if (len > siz - start)
		len = siz - start;
	c = malloc(len * sizeof(char) + 1);
	if (!c)
		return (NULL);
	put(i, len, s, c);
	return (c);
}
