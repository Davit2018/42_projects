/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:13:01 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/11 19:13:05 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_map_parser_1(char **tab)
{
	t_contr	count;
	int		*map_param;
	int		i;
	int		c_count;

	count.j = 0;
	count.i = 0;
	map_param = ft_map_size(tab);
	c_count = 0;
	i = 0;
	while (tab[map_param[0] - 1][i] != 0 || tab[0][i] != 0)
	{
		if (tab[0][i] != '1' || tab[map_param[0] - 1][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (i < map_param[0])
	{
		if (tab[i][0] != '1' || tab[i][map_param[1] - 1] != '1')
			return (0);
		i++;
	}
	c_count = ft_sender(tab, 0, &count, 0);
	return (c_count);
}

int	ft_sender(char **t, int i, t_contr *c, int e_count)
{
	t_cont	a;
	int		c_count;

	a.i = c->i;
	a.j = c->j;
	a.c_count = 0;
	c_count = ft_map_parser_2(t, i, &a, e_count);
	return (c_count);
}

int	ft_map_parser_2(char **t, int i, t_cont *a, int e_count)
{
	int	*map_param;

	map_param = ft_map_size(t);
	while (i < (map_param[0]))
	{
		a->j = 0;
		while (a->j != (map_param[1]))
		{
			if (t[i][a->j] != 'P' && t[i][a->j] != 'E' && t[i][a->j] != 'C' &&
					t[i][a->j] != '1' && t[i][a->j] != '0' && t[i][a->j] != 'D')
				return (0);
			if (t[i][a->j] == 'P')
				a->i++;
			if (t[i][a->j] == 'C')
				a->c_count++;
			if (t[i][a->j] == 'E')
				e_count++;
			a->j++;
		}
		i++;
	}
	if (a->i != 1 || a->c_count == 0 || e_count == 0)
		return (0);
	return (a->c_count);
}
