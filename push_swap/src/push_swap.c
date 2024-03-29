/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:27:15 by dghazary          #+#    #+#             */
/*   Updated: 2022/10/25 20:28:02 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_all	*parsing(char **argv)
{
	t_all	*all;
	char	**arr;

	arr = get_line(argv);
	check_arg(arr);
	repeated_double(arr);
	all = init_struct(arr);
	add_to_stack(all, arr);
	free_arr(arr, 0);
	return (all);
}

void	sorting(t_all *all)
{
	if (sort_true(all))
		free_stack(all);
	if (all->size_a < 6)
	{
		sort_five(all);
		free_stack(all);
	}
	move_a_to_b_first(all);
	while (!(sort_true(all) && all->size_b == 0))
	{
		if (all->size_b > 0 && all->size_b < 6)
			sort_b_to_a_five(all);
		else if (all->size_b >= 6)
			move_b_to_a(all);
		if (all->size_b == 0)
		{
			sort_a_to_b_five(all, 0, 0, 0);
			move_a_to_b(all);
		}
	}
}

int	main(int argc, char **argv)
{
	t_all	*all;

	if (argc > 1)
	{
		all = parsing(argv);
		sorting(all);
		free_stack(all);
	}
	return (0);
}
