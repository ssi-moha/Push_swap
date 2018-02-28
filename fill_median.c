/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 09:38:29 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/26 10:21:39 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_median(t_stack **median_b, t_stack **a, int *med, t_lim *lim)
{
	if (*median_b)
	{
		*med = (*median_b)->first->num;
		if (lower_med(a, *med, (*lim).min))
			mv_elem(*median_b);
	}
	*med = ((*lim).max + ((*lim).min)) / 2 + 1;
	if (!stack_len(median_b))
		*median_b = new_stack(*med);
	else
		*med = (*median_b)->first->num;
}
