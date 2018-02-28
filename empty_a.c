/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 09:15:19 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/27 11:20:32 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	empty_a(t_stack **a, t_stack **b, int med, t_lim *lim)
{
	while (!lower_med(a, med, (*lim).min))
	{
		if ((*a)->first->index < med && (*a)->first->index >= (*lim).min)
			push_b(a, b, 1);
		else
		{
			rotate_a(a, b, 1);
			if ((*lim).min > 1)
				(*lim).sort++;
		}
	}
	q_sort(a, b, lim);
}
