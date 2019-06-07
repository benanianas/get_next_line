/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:47:21 by abenani           #+#    #+#             */
/*   Updated: 2019/04/13 15:40:57 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	my_c;

	i = 0;
	my_c = (const char)c;
	while (s[i])
	{
		if (s[i] == my_c)
			return ((char*)&s[i]);
		i++;
	}
	if (s[i] == my_c)
		return ((char*)&s[i]);
	return (NULL);
}
