/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:07:46 by crossart          #+#    #+#             */
/*   Updated: 2020/11/14 20:01:03 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	k = 0;
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	l = i;
	while (src[j])
		j++;
	if (i > dstsize - 1 || dstsize == 0)
		return (j + dstsize);
	if (i < dstsize - 1)
	{
		while ((k < (dstsize - i - 1)) && src[k])
			dst[l++] = src[k++];
		dst[l] = '\0';
	}
	return (i + j);
}
