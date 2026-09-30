/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:57:22 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/22 16:05:04 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		ii;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] && i < len)
	{
		ii = i;
		j = 0;
		while (little[j] == big[ii] && ii < len && little[j] && big[ii])
		{
			j++;
			ii++;
		}
		if (little[j] == '\0')
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
