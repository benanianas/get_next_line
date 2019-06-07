/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:01:52 by abenani           #+#    #+#             */
/*   Updated: 2019/04/10 17:19:51 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*if_blank(void)
{
	char *str;

	str = (char*)malloc(sizeof(char));
	str[0] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	char	*str;
	int		j;
	int		num;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (if_blank());
	num = j - i + 2;
	str = (char*)malloc(sizeof(char) * num);
	if (str == NULL)
		return (NULL);
	j = -1;
	while (++j < num - 1)
		str[j] = s[i++];
	str[j] = '\0';
	return (str);
}
