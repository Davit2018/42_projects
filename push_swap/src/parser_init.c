/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:26:32 by dghazary          #+#    #+#             */
/*   Updated: 2022/10/25 20:26:35 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_all	*init_struct(char **arr)
{
	t_all	*all;
	int		i;

	i = 0;
	while (arr[i])
		i++;
	all = malloc(sizeof(t_all));
	if (all == NULL)
		return (NULL);
	all->stack_a = NULL;
	all->stack_b = NULL;
	all->size_a = i;
	all->size_b = 0;
	all->min_a = 1;
	return (all);
}

t_node	*new_list(int num, int index)
{
	t_node	*list;

	list = malloc(sizeof(t_node));
	if (list == NULL)
		return (NULL);
	list->num = num;
	list->flag = 0;
	list->index = index;
	list->next = NULL;
	list->prev = NULL;
	return (list);
}

void	lstadd_back(t_node **stack_a, t_node *new)
{
	t_node	*begin;

	if (new == NULL)
		return ;
	begin = *stack_a;
	if (begin)
	{
		if (begin->prev)
		{
			begin->prev->next = new;
			new->prev = begin->prev;
			new->next = begin;
			begin->prev = new;
		}
		else
		{
			begin->prev = new;
			begin->next = new;
			new->prev = begin;
			new->next = begin;
		}
	}
	else
		*stack_a = new;
	return ;
}

void	free_stack(t_all *all)
{
	t_node	*tmp;

	while (all->size_a--)
	{
		tmp = all->stack_a->next;
		free(all->stack_a);
		all->stack_a = NULL;
		all->stack_a = tmp;
	}
	while (all->size_b--)
	{
		tmp = all->stack_b->next;
		free(all->stack_b);
		all->stack_b = NULL;
		all->stack_b = tmp;
	}
	free(all);
	exit(0);
}
