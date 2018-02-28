/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_inb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:23:38 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/26 10:31:15 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	search_inb(t_stack **a, t_stack **b, int med, t_lim *lim)
{
	if (!next_up(b, med, stack_len(b)))
		while ((*b)->first->index < med)
			rotate_b(a, b, 1);
	else
		while ((*b)->first->index < med)
		{
			if ((*lim).sort)
			{
				reverse_rotate_both(a, b, 1);
				(*lim).sort--;
			}
			else
				reverse_rotate_b(a, b, 1);
		}
}
