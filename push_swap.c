/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:35:53 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/28 15:53:57 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			check_not(t_stack **a, int max, int i)
{
	int		j;
	t_elem	*tmp;

	j = 0;
	tmp = (*a)->first;
	while (tmp && i != tmp->index)
	{
		if (j > max / 2)
			return (0);
		tmp = tmp->next;
		j++;
	}
	return (1);
}

void		search_i(t_lim *lim, t_stack **a, t_stack **b)
{
	if ((*lim).sort)
	{
		reverse_rotate_both(a, b, 1);
		(*lim).sort--;
	}
	else
		reverse_rotate_b(a, b, 1);
}

void		s_sort(t_stack **a, t_stack **b, t_lim *lim)
{
	int i;
	int j;

	j = 0;
	while (stack_len(b))
	{
		i = max_index(b);
		while (i != (*b)->first->index)
		{
			if (!check_not(b, stack_len(b), i))
				search_i(lim, a, b);
			else
				rotate_b(a, b, 1);
		}
		while ((*lim).sort)
		{
			reverse_rotate_a(a, b, 1);
			(*lim).sort--;
		}
		push_a(a, b, 1);
		(*lim).min++;
		j++;
	}
	while (j--)
		rotate_a(a, b, 1);
}

void		q_sort(t_stack **a, t_stack **b, t_lim *lim)
{
	int				med;
	static t_stack	*median_b;

	if (is_sort(a, b))
		return ;
	part_case(a, b, lim);
	if (stack_len(b))
	{
		if (*b && stack_len(b) <= 35 && stack_len(b) > 0)
		{
			s_sort(a, b, lim);
			q_sort(a, b, lim);
		}
		med = (max_index(b) + ((*lim).min)) / 2;
		!(*b) ? median_b = new_stack(med) : new_elem(median_b, med);
		while (!bigger_med(b, med))
			(*b)->first->index >= med ? push_val(a, b, med, lim)
				: search_inb(a, b, med, lim);
		q_sort(a, b, lim);
	}
	else
	{
		fill_median(&median_b, a, &med, lim);
		empty_a(a, b, med, lim);
	}
}

int			main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	char	**tab;
	int		*sort;
	t_lim	lim;

	if (argc < 2)
		return (0);
	if (!check_arg(argc, argv))
		return (error_mess());
	tab = cp_av(argc, argv);
	a = stack_arg(argc, tab);
	b = NULL;
	sort = index_values(argc, tab);
	argc = (argc == 2) ? tab_len(tab) : argc - 1;
	index_stack(a, sort, argc);
	lim = init_struct(argc);
	if (argc == 3 || argc == 2)
		tri_sort(&a, &b);
	else if (argc < 6 && argc > 2)
		tri_five(&a, &b);
	else if (argc >= 6)
		q_sort(&a, &b, &lim);
	free_push(a, b, sort);
	return (free_tab(tab, argc));
}
