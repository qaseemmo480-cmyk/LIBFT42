/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 10:19:01 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/22 13:58:30 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	coundst;

	i = 0;
	coundst = ft_strlen(dst);
	if (size <= coundst)
		return (ft_strlen (src) + size);
	while (src[i] && (i + coundst < size - 1))
	{
		dst[coundst + i] = src[i];
		i++;
	}
	dst[coundst + i] = '\0';
	return (coundst + ft_strlen(src));
}
