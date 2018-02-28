/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 10:59:27 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/27 12:51:33 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack_a(t_stack **a, t_stack **b, int bol)
{
	int c;

	(void)*b;
	if (bol)
		write(1, "sa\n", 3);
	if (!*a || !(*a)->first->next)
		return ;
	c = (*a)->first->num;
	(*a)->first->num = (*a)->first->next->num;
	(*a)->first->next->num = c;
	c = (*a)->first->index;
	(*a)->first->index = (*a)->first->next->index;
	(*a)->first->next->index = c;
}

void	swap_stack_b(t_stack **a, t_stack **b, int bol)
{
	int c;

	(void)a;
	if (bol)
		write(1, "sb\n", 3);
	if (!*b || !(*b)->first->next)
		return ;
	c = (*b)->first->num;
	(*b)->first->num = (*b)->first->next->num;
	(*b)->first->next->num = c;
	c = (*b)->first->index;
	(*b)->first->index = (*b)->first->next->index;
	(*b)->first->next->index = c;
}

void	swap_both(t_stack **a, t_stack **b, int bol)
{
	swap_stack_a(a, b, 0);
	swap_stack_b(a, b, 0);
	if (bol)
		write(1, "ss\n", 3);
}
