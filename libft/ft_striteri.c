/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:43:41 by dghazary          #+#    #+#             */
/*   Updated: 2022/04/06 22:50:32 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	ptr[i] = '\0';
}
