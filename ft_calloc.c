/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:57:52 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/27 10:02:41 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;
	int		siz;

	siz = n * size;
	if (n != 0 && siz / n != size)
		return (NULL);
	p = malloc (n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, size * n);
	return (p);
}
