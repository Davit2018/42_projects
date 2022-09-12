/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:10:53 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/11 19:11:03 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line.h"
# include <unistd.h>
# include <libc.h>
# include <mlx.h>

typedef struct t_image {
	void	*b1;
	void	*b2;
	void	*b3;
	void	*b4;
	void	*b5;
	void	*b6;
	void	*mlx;
	void	*win;
	char	**tab;
	int		l;
}	t_image;

typedef struct t_contr {
	int	i;
	int	j;
}	t_contr;

typedef struct t_cont {
	int	i;
	int	j;
	int	c_count;
}	t_cont;

typedef struct t_def_params {
	int	img_h;
	int	img_l;
	int	col_count;
}	t_def_params;

char	**ft_map_pre_reader(char *a);
char	**ft_map_reader(char **a, char *b, int c);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putnbr(int a);
int		*ft_map_size(char **tab);
int		ft_window(char *tab, t_def_params p);
int		ft_map_parser_1(char **tab);
int		ft_map_parser_2(char **tab, int a, t_cont *c, int d);
int		ft_control(char **tab, char key, int a);
int		ft_controller(char **tab, char a, t_contr *b, int i);
int		ft_left(t_contr *tab, char **tab1, int a);
int		ft_right(t_contr *a, char **b, int c);
int		ft_up(t_contr *a, char **b, int c);
int		ft_down(t_contr *f, char **tab, int a);
void	ft_paint(void *t, char **tab, void *f);
void	ft_painter(t_image *img, int a, int b, int c);
int		ft_exit(void);
int		ft_sender(char **t, int i, t_contr *a, int e_count);
int		ft_definer(char *tab);
typedef struct s_vars {
	void	*mlx;
	void	*win;
	char	**tab;
	int		img_h;
	int		img_l;
	int		col_count;
	int		step;
	char	*path;
}	t_vars;

#endif
