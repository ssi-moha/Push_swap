/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 12:41:44 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/26 16:33:04 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tri_sort(t_stack **a, t_stack **b)
{
	if (is_sort(a, b))
		return ;
	if ((*a)->first->index != 1)
	{
		if ((*a)->first->next->index == 1)
			if ((*a)->first->index == 2)
				swap_stack_a(a, b, 1);
			else
				rotate_a(a, b, 1);
		else if ((*a)->first->next->index == 2)
		{
			swap_stack_a(a, b, 1);
			reverse_rotate_a(a, b, 1);
		}
		else if ((*a)->first->next->index == 3)
			reverse_rotate_a(a, b, 1);
	}
	else
	{
		rotate_a(a, b, 1);
		swap_stack_a(a, b, 1);
		reverse_rotate_a(a, b, 1);
	}
}
