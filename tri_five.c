/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_five.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 13:19:27 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/27 16:11:09 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end_tri(t_stack **a, t_stack **b, int max)
{
	while (stack_len(a) >= 3)
		if ((*a)->first->index < max - 1)
			push_b(a, b, 1);
		else
			rotate_a(a, b, 1);
}

void	tri_five(t_stack **a, t_stack **b)
{
	int i;
	int max;

	max = max_index(a);
	i = 1;
	if (is_sort(a, b))
		return ;
	if (stack_len(a) == 2 && (*a)->first->index > (*a)->first->next->index)
		swap_stack_a(a, b, 1);
	if (stack_len(b))
	{
		while ((*b)->first->index != max_index(b))
			if ((*b)->first->next->index == max_index(b))
				rotate_b(a, b, 1);
			else
				reverse_rotate_b(a, b, 1);
		push_a(a, b, 1);
		tri_five(a, b);
	}
	else if (stack_len(a) >= 3)
		end_tri(a, b, max);
	tri_five(a, b);
}
