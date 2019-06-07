/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 11:00:31 by abenani           #+#    #+#             */
/*   Updated: 2019/04/02 19:21:26 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *find)
{
	int i;
	int j;

	i = 0;
	if (!(find[i]))
		return ((char*)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == find[j] && find[j])
			j++;
		if (!find[j])
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
