/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:53:24 by abenani           #+#    #+#             */
/*   Updated: 2019/04/12 15:46:01 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lstlen(t_list **alst)
{
	size_t		len;
	t_list		*lst;

	lst = *alst;
	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
