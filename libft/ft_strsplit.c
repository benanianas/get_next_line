/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:16:00 by abenani           #+#    #+#             */
/*   Updated: 2019/04/14 11:35:04 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_numchars(char const *s, int i, char c)
{
	int num;

	num = 0;
	while (s[i] && s[i] != c)
	{
		num++;
		i++;
	}
	return (num);
}

static int		ft_count_words(char const *s, char c)
{
	int i;
	int num;

	i = 0;
	num = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			num++;
		i++;
	}
	if (s[0] != c)
		num++;
	return (num);
}

static char		**ft_continue(const char *s, char **str, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			i++;
		else
		{
			str[j] = (char*)malloc(sizeof(char) * (ft_numchars(s, i, c) + 1));
			k = 0;
			while (s[i] && s[i] != c)
			{
				str[j][k] = s[i];
				i++;
				k++;
			}
			str[j][k] = '\0';
			j++;
		}
	}
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		n;

	if (!s)
		return (NULL);
	n = ft_count_words(s, c);
	str = (char**)malloc(sizeof(char*) * (n + 1));
	if (str == NULL)
		return (NULL);
	str[n] = NULL;
	return (ft_continue(s, str, c));
}
