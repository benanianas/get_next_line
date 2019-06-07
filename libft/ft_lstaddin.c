/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 11:47:47 by abenani           #+#    #+#             */
/*   Updated: 2019/04/14 15:33:26 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddin(t_list **alst, t_list *new, int i)
{
	t_list *lst;

	if (!new)
		return ;
	lst = *alst;
	if (i == 1)
	{
		new->next = lst;
		*alst = new;
		return ;
	}
	i -= 2;
	while (lst->next && i)
	{
		lst = lst->next;
		i--;
	}
	if (!i)
	{
		new->next = lst->next;
		lst->next = new;
	}
}
