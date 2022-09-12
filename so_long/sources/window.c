/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:13:55 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/11 21:57:37 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int keycode, t_vars *vars)
{
	char	**tab;
	int		col_count;
	int		z;

	tab = vars->tab;
	col_count = vars->col_count;
	z = 0;
	if (keycode == 53)
		exit (0);
	if (keycode == 123 || keycode == 0)
		z = ft_control(tab, 'l', col_count);
	else if (keycode == 124 || keycode == 2)
		z = ft_control(tab, 'r', col_count);
	else if (keycode == 125 || keycode == 1)
		z = ft_control(tab, 'd', col_count);
	else if (keycode == 126 || keycode == 13)
		z = ft_control(tab, 'u', col_count);
	vars->col_count = vars->col_count - z;
	vars->step += 1;
	ft_putnbr(vars->step);
	write (1, "\n", 1);
	ft_paint(vars->mlx, tab, vars->win);
	return (z);
}

int	ft_definer(char *path)
{	
	t_def_params	params;
	int				ind;

	params.img_h = 10;
	params.img_l = 10;
	params.col_count = ft_map_parser_1(ft_map_pre_reader(path));
	ind = ft_window(path, params);
	return (ind);
}

int	ft_window(char *path, t_def_params params)
{
	t_vars	vars;
	void	*mlx;
	void	*win;
	int		*w_p;
	char	**tab;

	tab = ft_map_pre_reader(path);
	if (!tab)
		return (0);
	w_p = ft_map_size(tab);
	mlx = mlx_init();
	win = mlx_new_window(mlx, (w_p[1] * 70), (w_p[0] * 70), "Game");
	ft_paint(mlx, tab, win);
	vars.mlx = mlx;
	vars.win = win;
	vars.tab = tab;
	vars.img_h = params.img_h;
	vars.img_l = params.img_l;
	vars.col_count = params.col_count;
	vars.step = 0;
	mlx_hook(vars.win, 17, 0, ft_exit, &vars);
	mlx_key_hook(vars.win, key_hook, &vars);
	ft_paint(mlx, tab, win);
	mlx_loop(mlx);
	return (1);
}

int	ft_exit(void)
{
	exit(0);
	return (0);
}
