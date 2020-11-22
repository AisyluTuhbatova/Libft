/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:10:02 by crossart          #+#    #+#             */
/*   Updated: 2020/11/07 18:34:47 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	unsigned const char	*c;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	a = (unsigned char*)dst;
	c = (unsigned const char*)src;
	while (i < n)
	{
		a[i] = c[i];
		i++;
	}
	return (dst);
}
