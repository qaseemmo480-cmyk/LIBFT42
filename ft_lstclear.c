/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:16:37 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/22 16:00:51 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*op;

	p = *lst;
	if (!lst || !del || !*lst)
		return ;
	while (p)
	{
		op = p->next;
		ft_lstdelone (p, del);
		p = op;
	}
	*lst = NULL;
}
