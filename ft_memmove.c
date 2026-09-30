/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:28:05 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/26 16:24:10 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ds;
	unsigned const char	*sr;
	size_t				i;

	if (!dest)
		return (NULL);
	ds = (unsigned char *)dest;
	sr = (unsigned const char *)src;
	i = 0;
	if (ds >= sr)
	{
		i = n;
		while (i > 0)
		{
			ds[i - 1] = sr[i - 1];
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
