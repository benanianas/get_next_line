/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:58:54 by abenani           #+#    #+#             */
/*   Updated: 2019/04/14 13:44:58 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*if_positive(int n, int count)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	while (--count >= 0)
	{
		str[count] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	unsigned int	num;
	char			*str;
	int				count;

	str = NULL;
	count = ft_count_digits(n);
	if (n < 0)
	{
		str = (char*)malloc(sizeof(char) * (count + 2));
		if (str == NULL)
			return (NULL);
		num = n * -1;
		str[count + 1] = '\0';
		while (count)
		{
			str[count] = (num % 10) + '0';
			count--;
			num /= 10;
		}
		str[0] = '-';
		return (str);
	}
	return (if_positive(n, count));
}
