/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:30:15 by crossart          #+#    #+#             */
/*   Updated: 2020/11/16 15:47:57 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static unsigned int	minus(int n, int fd)
{
	int	min_int;

	min_int = -2147483648;
	if (n == min_int)
	{
		write(fd, "-", 1);
		return (2147483648);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	return ((unsigned int)n);
}

void				ft_putnbr_fd(int n, int fd)
{
	char			ch[20];
	int				i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = minus(n, fd);
	k = j;
	while (j > 9)
	{
		j = j / 10;
		i++;
	}
	i++;
	j = i;
	while (i-- >= 0)
	{
		ch[i] = (k % 10) + '0';
		k = k / 10;
	}
	write(fd, ch, j);
}
