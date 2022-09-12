/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:15:29 by dghazary          #+#    #+#             */
/*   Updated: 2022/08/11 19:15:34 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_map_pre_reader(char	*path)
{
	char	**tab;
	char	*str;
	int		count;
	int		fd;
	int		i;

	count = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (1)
	{	
		str = get_next_line(fd);
		if (!str)
			break ;
		i = ft_strlen(str);
		count++;
		free(str);
	}
	close(fd);
	tab = (char **)malloc((count + 1) * sizeof(char *));
	tab = ft_map_reader(tab, path, i);
	return (tab);
}	

char	**ft_map_reader(char **tab, char *path, int i)
{
	int		k;
	int		count;
	int		fd;
	char	*str;

	count = 0;
	fd = open(path, O_RDONLY);
	while (1)
	{
		str = get_next_line(fd);
		if (!str)
			break ;
		k = ft_strlen(str);
		if (k != i)
			return (NULL);
		str[ft_strlen(str) - 1] = 0;
		tab[count] = ft_strdup(str);
		free(str);
		count++;
	}
	tab[count] = NULL;
	close(fd);
	if (!ft_map_parser_1(tab))
		return (NULL);
	return (tab);
}
