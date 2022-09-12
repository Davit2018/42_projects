/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:14:33 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/11 19:14:38 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n > 0)
	{
			*d = *s;
			d++;
			s++;
			n--;
	}
	return (dst);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s) + 1;
	new = malloc(len);
	if (NULL == new)
		return (NULL);
	return ((char *)ft_memcpy(new, s, len));
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str && *str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_putnbr(int x)
{
	if (x > 9)
		ft_putnbr(x / 10);
	x = x % 10 + '0';
	write (1, &x, 1);
}
