/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 16:04:10 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/24 09:28:41 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int		counode;
	t_list				*temp;

	temp = lst;
	counode = 0 ;
	while (temp != NULL)
	{
		counode++;
		temp = temp -> next;
	}
	return (counode);
}
