/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:48:33 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/24 09:29:28 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*ss;
	size_t					i;

	i = 0;
	ss = (const unsigned char *)s;
	while (n > i)
	{
		if (ss[i] == ((unsigned char)c))
			return ((unsigned char *)(ss + i));
		i++;
	}
	return (NULL);
}
