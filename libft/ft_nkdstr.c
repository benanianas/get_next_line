/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nkdstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:29:29 by abenani           #+#    #+#             */
/*   Updated: 2019/04/14 15:06:43 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nkdstr(char *str)
{
	char	*s;
	int		i;
	int		j;
	int		count;

	i = -1;
	count = 0;
	while (str[++i])
		if (str[i] > 32 && str[i] < 127)
			count++;
	if (!(s = malloc(sizeof(char) * (count + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] > 32 && str[i] < 127)
		{
			s[j] = str[i];
			j++;
		}
		i++;
	}
	s[j] = '\0';
	return (s);
}
