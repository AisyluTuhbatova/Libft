/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 21:25:45 by crossart          #+#    #+#             */
/*   Updated: 2020/11/13 13:29:12 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	len_2(long int n)
{
	int			i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char		*ft_itoa(int n)
{
	char		*ch;
	int			l;
	long int	nn;

	nn = (long int)n;
	l = len_2(nn);
	if (!(ch = malloc((l + 1) * sizeof(char))))
		return (NULL);
	if (nn == 0)
		ch[0] = '0';
	if (nn < 0)
	{
		ch[0] = '-';
		nn = nn * (-1);
	}
	ch[l] = '\0';
	l--;
	while (nn > 0)
	{
		ch[l--] = (nn % 10) + '0';
		nn = nn / 10;
	}
	return (ch);
}
