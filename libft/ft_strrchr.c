/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 17:28:37 by abenani           #+#    #+#             */
/*   Updated: 2019/04/01 17:52:43 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	my_c;
	int		len;

	len = ft_strlen(s);
	my_c = (const char)c;
	while (len)
	{
		if (s[len] == my_c)
			return ((char*)&s[len]);
		len--;
	}
	if (s[0] == my_c)
		return ((char*)&s[len]);
	return (NULL);
}
