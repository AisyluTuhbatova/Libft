/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:56:51 by crossart          #+#    #+#             */
/*   Updated: 2020/11/18 20:23:45 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ch;
	int		i;
	int		j;
	int		k;

	k = 0;
	j = ft_strlen(s2);
	i = ft_strlen(s1);
	if (!(ch = (char *)malloc((i + j) * sizeof(char))))
		return (NULL);
	i = 0;
	j = 0;
	while (s2[j] || s1[i])
	{
		while (s1[i])
			ch[k++] = s1[i++];
		ch[k++] = s2[j++];
	}
	ch[k] = '\0';
	return (ch);
}
