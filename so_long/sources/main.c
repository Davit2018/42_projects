/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:12:44 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/19 21:13:09 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	int		i;
	char	*path;

	path = "reb.";
	i = 0;
	if (ac != 2 || !ft_map_pre_reader(av[1]))
	{
		write (1, "Something wrong\n", 16);
		return (1);
	}
	i = ft_strlen(av[1]) - 1;
	while (*path != 0)
	{
		if (*path != av[1][i])
		{
			write (1, "map file error\n", 15);
			return (1);
		}
		path++;
		i--;
	}
	ft_definer(av[1]);
}
