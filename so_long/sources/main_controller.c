/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_controller.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:15:07 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/11 19:15:12 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_control(char **tab, char key, int col_count)
{
	int		k;
	int		z;
	t_contr	p;

	k = 0;
	p.i = 0;
	z = 0;
	while (tab[p.i] != NULL)
	{
		p.j = 0;
		while (tab[p.i][p.j] != 0)
		{
			if (tab[p.i][p.j] == 'P')
			{
				k = 1;
				break ;
			}
			p.j++;
		}
		if (k == 1)
			break ;
		p.i++;
	}
	z = ft_controller(tab, key, &p, col_count);
	return (z);
}

int	ft_controller(char **tab, char key, t_contr *p, int col_count)
{
	int	z;

	z = 0;
	if (key == 'l')
		z = ft_left(p, tab, col_count);
	else if (key == 'r')
		z = ft_right(p, tab, col_count);
	else if (key == 'u')
		z = ft_up(p, tab, col_count);
	else if (key == 'd')
		z = ft_down(p, tab, col_count);
	return (z);
}
