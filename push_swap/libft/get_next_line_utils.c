/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:53:47 by dghazary          #+#    #+#             */
/*   Updated: 2022/10/25 20:53:58 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_gnl_strlen(const char *str)
{
	size_t	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_gnl_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (unsigned char)c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}

char	*ft_gnl_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*mem;

	i = 0;
	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	mem = (char *)malloc(ft_gnl_strlen(s1) + ft_gnl_strlen(s2) + 1);
	if (mem == NULL)
		return (NULL);
	while (s1 && s1[i])
		mem[j++] = s1[i++];
	i = 0;
	while (s2 && s2[i])
		mem[j++] = s2[i++];
	mem[j] = '\0';
	return (mem);
}

char	*ft_gnl_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*mem;
	char	*str;

	str = (char *)s1;
	len = ft_gnl_strlen((char *)s1);
	mem = (char *)malloc(sizeof(char) * (len + 1));
	if (!mem)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mem[i] = str[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
