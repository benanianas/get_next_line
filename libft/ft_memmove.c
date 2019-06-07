/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 22:21:35 by abenani           #+#    #+#             */
/*   Updated: 2019/04/11 17:17:13 by abenani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst1;
	char	*src1;
	int		ilen;

	ilen = (int)len - 1;
	dst1 = (char*)dst;
	src1 = (char*)src;
	i = 0;
	if (src1 < dst1)
		while (ilen >= 0)
		{
			dst1[ilen] = src1[ilen];
			ilen--;
		}
	else
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	return ((void*)dst1);
}
