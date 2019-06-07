/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:25:34 by abenani           #+#    #+#             */
/*   Updated: 2019/04/13 15:31:09 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t ldst;
	size_t lsrc;
	size_t i;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (size <= ldst)
		lsrc += size;
	else
		lsrc += ldst;
	i = 0;
	while (src[i] && ldst + 1 < size)
	{
		dst[ldst] = src[i];
		i++;
		ldst++;
	}
	dst[ldst] = '\0';
	return (lsrc);
}
