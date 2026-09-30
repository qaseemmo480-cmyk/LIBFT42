/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 11:05:44 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/26 16:20:23 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	unsigned char		*cd;
	unsigned const char	*cs;
	size_t				i;

	if (dest == NULL)
		return (NULL);
	cd = (unsigned char *)dest;
	cs = (unsigned const char *)src;
	i = 0;
	while (n > i)
	{
		cd[i] = cs[i];
		i++;
	}
	return (dest);
}
