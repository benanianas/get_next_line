/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:55:55 by abenani           #+#    #+#             */
/*   Updated: 2019/04/09 17:08:02 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;
	t_list *n_node;

	node = *alst;
	while (node)
	{
		n_node = node->next;
		del(node->content, node->content_size);
		free(node);
		node = n_node;
	}
	*alst = NULL;
}
