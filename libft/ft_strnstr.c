/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:20:14 by crossart          #+#    #+#             */
/*   Updated: 2020/11/20 15:13:49 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;

	l = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && l <= len)
	{
		if (!ft_strncmp(haystack, needle, l))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
