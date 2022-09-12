/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:13:34 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/11 19:13:39 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	*ft_map_size(char **tab)
{
	int	map_h;
	int	map_l;
	int	*param;

	param = (int *)malloc(2 * sizeof(int));
	map_h = 0;
	while (tab[map_h] != NULL)
		map_h++;
	map_l = ft_strlen(tab[0]);
	param[0] = map_h;
	param[1] = map_l;
	return (param);
}
