/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:01:49 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/24 09:24:30 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	co(int n)
{
	int	i;

	if (n <= 0)
		i = 1;
	else
		i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	edit(int i, int n, char *p)
{
	while (n)
	{
		p[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	char	*p;
	int		fl;
	int		siz;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	fl = 0;
	siz = co(n);
	i = co(n) - 1;
	p = malloc(co(n) + 1);
	if (n == 0)
		p[0] = '0';
	if (n < 0)
	{
		fl = 1;
		n *= -1;
	}
	edit (i, n, p);
	if (fl)
		p[0] = '-';
	p[siz] = '\0';
	return (p);
}
