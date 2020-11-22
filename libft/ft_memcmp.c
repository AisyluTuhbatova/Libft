/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:11:40 by crossart          #+#    #+#             */
/*   Updated: 2020/11/07 18:35:08 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *a;
	const unsigned char *b;
	size_t				i;

	i = 0;
	a = (const unsigned char*)s1;
	b = (const unsigned char*)s2;
	if (n == 0 || (!s1 && !s2))
		return (0);
	while (i < n)
	{
		if (a[i] != b[i])
			return ((int)(a[i] - b[i]));
		i++;
	}
	return (0);
}
