/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:06:07 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/26 12:01:37 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	sol(const char *str, int i)
{
	int	s;

	s = 0;
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		s = s * 10 + (str[i] - '0');
		i++;
	}
	return (s);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	j;
	int		s;
	int		neg;

	i = 0;
	s = 0;
	j = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] == '+'
		|| str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
		j++;
	}
	if (j > 1)
		return (0);
	s = sol(str, i);
	return (s * neg);
}
