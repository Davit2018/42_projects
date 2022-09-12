/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:15:50 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/11 19:15:57 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_paint(void *mlx, char **tab, void *win)
{
	t_image	img;
	int		img_h;
	int		img_l;

	img_h = 10;
	img_l = 10;
	img.b1 = mlx_xpm_file_to_image(mlx, "./player.xpm", &img_h, &img_l);
	img.b2 = mlx_xpm_file_to_image(mlx, "./wall_1.xpm", &img_h, &img_l);
	img.b3 = mlx_xpm_file_to_image(mlx, "./aboi_1.xpm", &img_h, &img_l);
	img.b4 = mlx_xpm_file_to_image(mlx, "./collect.xpm", &img_h, &img_l);
	img.b5 = mlx_xpm_file_to_image(mlx, "./exit.xpm", &img_h, &img_l);
	img.b6 = mlx_xpm_file_to_image(mlx, "./bomb.xpm", &img_h, &img_l);
	img.mlx = mlx;
	img.win = win;
	img.tab = tab;
	img.l = 0;
	ft_painter(&img, 0, 0, 0);
}

void	ft_painter(t_image *img, int i, int h, int j)
{
	while (img->tab[i] != NULL)
	{
		j = 0;
		img->l = 0;
		while (img->tab[i][j] != 0)
		{	
			mlx_put_image_to_window(img->mlx, img->win, img->b3, img->l, h);
			if (img->tab[i][j] == 'P')
				mlx_put_image_to_window(img->mlx, img->win, img->b1, img->l, h);
			else if (img->tab[i][j] == 'E')
				mlx_put_image_to_window(img->mlx, img->win, img->b5, img->l, h);
			else if (img->tab[i][j] == 'C')
				mlx_put_image_to_window(img->mlx, img->win, img->b4, img->l, h);
			else if (img->tab[i][j] == '0')
				mlx_put_image_to_window(img->mlx, img->win, img->b3, img->l, h);
			else if (img->tab[i][j] == '1')
				mlx_put_image_to_window(img->mlx, img->win, img->b2, img->l, h);
			else if (img->tab[i][j] == 'D')
				mlx_put_image_to_window(img->mlx, img->win, img->b6, img->l, h);
			img->l += 70;
			j++;
		}
		h += 70;
		i++;
	}
}
