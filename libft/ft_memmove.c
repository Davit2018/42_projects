/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:42:43 by dghazary          #+#    #+#             */
/*   Updated: 2022/04/08 19:42:55 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (d < s)
		ft_memcpy (dst, src, len);
	else
	{
		while (d + len != dst)
		{
			*(d + len - 1) = *(s + len - 1);
			d--;
			s--;
		}
	}
	return (dst);
}
