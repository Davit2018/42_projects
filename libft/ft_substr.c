/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:13:00 by dghazary          #+#    #+#             */
/*   Updated: 2022/04/08 19:53:26 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	char	*ptr;

	if (start >= ft_strlen(s))
		len = 0;
	else
		ptr = (char *)s + start;
	i = -1;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	while (++i < len && *(ptr + i))
		str[i] = *(ptr + i);
	str[i] = '\0';
	return (str);
}
