/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:18:56 by crossart          #+#    #+#             */
/*   Updated: 2020/11/11 21:19:39 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ch;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
		i++;
	ch = (char *)malloc((i + 1) * sizeof(char));
	if (!ch)
		return (NULL);
	while (j < i)
	{
		ch[j] = f(j, s[j]);
		j++;
	}
	ch[j] = '\0';
	return (ch);
}
