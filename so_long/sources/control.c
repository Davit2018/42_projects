/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:12:07 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/11 19:12:12 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_left(t_contr *p, char **tab, int col_count)
{
	int	z;

	z = 0;
	if (tab[p->i][p->j - 1] == 'D')
		ft_exit();
	if (tab[p->i][p->j - 1] == '0' || tab[p->i][p->j - 1] == 'C'
			|| tab[p->i][p->j - 1] == 'E')
	{
		if (tab[p->i][p->j - 1] == 'E')
		{
			if (col_count == 0)
				ft_exit();
			else
				return (0);
		}
		if (tab[p->i][p->j - 1] == 'C')
			z = 1;
		tab[p->i][p->j] = '0';
		tab[p->i][p->j - 1] = 'P';
	}
	return (z);
}

int	ft_right(t_contr *p, char **tab, int col_count)
{	
	int	z;

	z = 0;
	if (tab[p->i][p->j + 1] == 'D')
		ft_exit();
	if (tab[p->i][p->j + 1] == '0' || tab[p->i][p->j + 1] == 'C'
			|| tab[p->i][p->j + 1] == 'E')
	{
		if (tab[p->i][p->j + 1] == 'E')
		{
			if (col_count == 0)
				ft_exit();
			else
				return (0);
		}			
		if (tab[p->i][p->j + 1] == 'C')
			z = 1;
		tab[p->i][p->j] = '0';
		tab[p->i][p->j + 1] = 'P';
	}
	return (z);
}

int	ft_up(t_contr *p, char **tab, int col_count)
{
	int	z;

	z = 0;
	if (tab[p->i - 1][p->j] == 'D')
		ft_exit();
	if (tab[p->i - 1][p->j] == '0' || tab[p->i - 1][p->j] == 'C'
			|| tab[p->i - 1][p->j] == 'E')
	{
		if (tab[p->i - 1][p->j] == 'E')
		{
			if (col_count == 0)
				ft_exit();
			else
				return (0);
		}
		if (tab[p->i - 1][p->j] == 'C')
			z = 1;
		tab[p->i][p->j] = '0';
		tab[p->i - 1][p->j] = 'P';
	}
	return (z);
}

int	ft_down(t_contr *p, char **tab, int col_count)
{
	int	z;

	z = 0;
	if (tab[p->i + 1][p->j] == 'D')
		ft_exit();
	if (tab[p->i + 1][p->j] == '0' || tab[p->i + 1][p->j] == 'C'
			|| tab[p->i + 1][p->j] == 'E')
	{
		if (tab[p->i + 1][p->j] == 'E')
		{
			if (col_count == 0)
				ft_exit();
			else
				return (0);
		}
		if (tab[p->i + 1][p->j] == 'C')
			z = 1;
		tab[p->i][p->j] = '0';
		tab[p->i + 1][p->j] = 'P';
	}
	return (z);
}
