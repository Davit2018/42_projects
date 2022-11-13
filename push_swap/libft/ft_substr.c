/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:52:15 by dghazary          #+#    #+#             */
/*   Updated: 2022/10/25 20:52:30 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	if (s == NULL)
		return (0);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	mem = (char *) malloc(len + 1);
	if (mem == NULL)
		return (NULL);
	while (i < len && str[i + start] != '\0')
	{
		mem[i] = str[i + start];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
