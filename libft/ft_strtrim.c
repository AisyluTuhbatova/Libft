/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:02:42 by crossart          #+#    #+#             */
/*   Updated: 2020/11/13 13:29:31 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	check(char s1, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ch;
	int		i;
	int		l;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	l = ft_strlen(s1);
	while (s1[i] && check(s1[i], set))
		i++;
	while (l > i && check(s1[l - 1], set))
		l--;
	ch = malloc((l - i + 1) * sizeof(char));
	if (!ch)
		return (NULL);
	while (i < l)
		ch[j++] = s1[i++];
	ch[j] = '\0';
	return (ch);
}
