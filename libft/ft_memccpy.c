/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:57:09 by crossart          #+#    #+#             */
/*   Updated: 2020/10/30 15:30:49 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;
	unsigned char		d;

	i = 0;
	a = (unsigned char*)dst;
	b = (const unsigned char*)src;
	d = (unsigned char)c;
	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == d)
			return (&a[i + 1]);
		i++;
	}
	return (NULL);
}
