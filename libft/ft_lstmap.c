/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:06:28 by abenani           #+#    #+#             */
/*   Updated: 2019/04/13 13:51:18 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *node;

	if (lst)
	{
		new = ft_lstnew(f(lst)->content, f(lst)->content_size);
		node = new;
		while (lst->next)
		{
			lst = lst->next;
			new->next = ft_lstnew(f(lst)->content, f(lst)->content_size);
			new = new->next;
		}
		return (node);
	}
	return (NULL);
}
