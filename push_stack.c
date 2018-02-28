/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 11:03:48 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/26 16:51:32 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack **a, t_stack **b, int bol)
{
	int stk;

	if (bol)
		write(1, "pa\n", 3);
	if (*b == NULL)
		return ;
	stk = (*b)->first->index;
	if (*a == NULL)
		*a = new_stack(mv_elem(*b));
	else
		new_elem(*a, mv_elem(*b));
	(*a)->first->index = stk;
}

void	push_b(t_stack **a, t_stack **b, int bol)
{
	int stk;

	if (bol)
		write(1, "pb\n", 3);
	if (*a == NULL)
		return ;
	stk = (*a)->first->index;
	if (*b == NULL)
		*b = new_stack(mv_elem(*a));
	else
		new_elem(*b, mv_elem(*a));
	(*b)->first->index = stk;
}
