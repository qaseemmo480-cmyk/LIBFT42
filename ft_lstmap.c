/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabuward <aabuward@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:08:04 by aabuward          #+#    #+#             */
/*   Updated: 2026/09/24 13:32:06 by aabuward         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*count;
	void	*cont;

	count = lst;
	new_list = NULL;
	if (!f || !lst || !del)
		return (NULL);
	while (count)
	{
		cont = f(count->content);
		new_node = ft_lstnew(cont);
		if (!new_node)
		{
			del(cont);
			free(new_node);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		count = count->next;
	}
	return (new_list);
}
