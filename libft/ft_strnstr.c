/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:27:49 by abenani           #+#    #+#             */
/*   Updated: 2019/04/13 16:04:54 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (!find[i])
		return ((char*)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == find[j] && find[j] && i + j < n)
			j++;
		if (!find[j])
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
