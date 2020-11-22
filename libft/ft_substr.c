/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:37:35 by crossart          #+#    #+#             */
/*   Updated: 2020/11/12 15:02:18 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	i;
	char	*ch;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[j])
		j++;
	ch = (char *)malloc((len + 1) * sizeof(char));
	if (!ch)
		return (NULL);
	while (start < j && s[start] && i < len)
		ch[i++] = s[start++];
	ch[i] = '\0';
	return (ch);
}
