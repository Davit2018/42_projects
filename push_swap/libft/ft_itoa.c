/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:37:14 by dghazary          #+#    #+#             */
/*   Updated: 2022/10/25 20:37:20 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_nbr(int n)
{
	int		len;
	long	i;

	i = (long)n;
	if (n < 0)
		i = (long)n * -1;
	len = 0;
	while (i > 0)
	{
		i = i / 10;
		len++;
	}
	if (n > 0)
		return (len);
	else if (n == 0)
		return (1);
	else
		return (len + 1);
}

void	record_str(long n, int len, char	*str)
{
	str[len] = '\0';
	while (len != 0)
	{
		str[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	i;

	len = size_nbr(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n >= 0)
		record_str(n, len, str);
	else
	{
		i = (long)n * -1;
		record_str(i, len, str);
		str[0] = '-';
	}
	return (str);
}
