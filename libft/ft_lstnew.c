/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:34:43 by abenani           #+#    #+#             */
/*   Updated: 2019/04/07 15:42:34 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	node = (t_list*)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
		node->next = NULL;
	}
	else
	{
		if (!(node->content = (void*)malloc(content_size)))
			return (NULL);
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
		node->next = NULL;
	}
	return (node);
}
