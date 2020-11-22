/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warchang <warchang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:09:08 by warchang          #+#    #+#             */
/*   Updated: 2020/11/22 19:48:12 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_mas_count(char const *s1, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (j == 0 && s1[i] != c)
			j = 1;
		if (s1[i] == c && s1[i + 1] != c && s1[i + 1] != '\0')
			j++;
		i++;
	}
	return (j);
}

static void		ft_free(char **mas, int i)
{
	while ((i - 1) > 0)
	{
		free(mas[i - 1]);
		i--;
	}
	free(mas);
}

static	void	ft_mas_el(const char *s, char c, char **mas, int i)
{
	int	l;
	int	k;
	int	j;

	k = 0;
	j = 0;
	while (i < ft_mas_count(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		if (j == 0 || ((s[j] != c) && (s[j - 1] == c || s[j - 1] == '\0')))
			k = j;
		if (s[j + 1] == c || s[j + 1] == '\0')
		{
			l = j - k + 1;
			mas[i++] = ft_substr(s, (unsigned char)(j - l + 1), (size_t)l);
			if (!mas[i - 1])
			{
				ft_free(mas, i - 1);
				return ;
			}
		}
		j++;
	}
	mas[i] = NULL;
}

char			**ft_split(char const *s, char c)
{
	char	**mas;
	int		n;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	n = ft_mas_count(s, c);
	if (!(mas = malloc((n + 1) * sizeof(char *))))
		return (NULL);
	ft_mas_el(s, c, mas, i);
	return (mas);
}
