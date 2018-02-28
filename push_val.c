/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_val.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:44:09 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/28 14:15:39 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_val(t_stack **a, t_stack **b, int med, t_lim *lim)
{
	(void)med;
	while ((*lim).sort)
	{
		reverse_rotate_a(a, b, 1);
		(*lim).sort--;
	}
	push_a(a, b, 1);
	while ((*a)->first->index == (*lim).min)
	{
		rotate_a(a, b, 1);
		(*lim).min++;
	}
}
