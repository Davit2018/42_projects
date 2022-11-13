/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:41:43 by dghazary          #+#    #+#             */
/*   Updated: 2022/10/25 20:41:46 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dict, const void *str, size_t n)
{
	size_t	i;
	char	*dict2;
	char	*str2;

	i = 0;
	dict2 = (char *)dict;
	str2 = (char *)str;
	if (str2 == NULL && dict2 == NULL)
		return (0);
	while (i < n)
	{
		dict2[i] = str2[i];
		i++;
	}
	return (dict);
}
