/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:04:25 by crossart          #+#    #+#             */
/*   Updated: 2020/11/14 21:11:19 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*el_mas;
	size_t			i;
	size_t			n;

	i = 0;
	n = count * size;
	el_mas = (void *)malloc(n);
	if (!el_mas)
		return (NULL);
	while (n--)
	{
		el_mas[i] = 0;
		i++;
	}
	return ((void *)el_mas);
}
