/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:52:17 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/26 11:20:10 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	part_case(t_stack **a, t_stack **b, t_lim *lim)
{
	if (last_elem(a) == (*lim).min)
	{
		(*lim).min++;
		q_sort(a, b, lim);
	}
	if ((*a)->first->next->index == (*lim).min)
	{
		swap_stack_a(a, b, 1);
		rotate_a(a, b, 1);
		(*lim).min++;
		q_sort(a, b, lim);
	}
	if ((*a)->first->index == (*lim).min)
	{
		rotate_a(a, b, 1);
		(*lim).min++;
		q_sort(a, b, lim);
	}
}
