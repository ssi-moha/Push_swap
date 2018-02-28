/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 19:12:00 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/24 14:59:04 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack **a, t_stack **b, int bol)
{
	t_elem *tmp;
	t_elem *tmp_1;
	t_elem *begin;

	(void)*b;
	if (bol)
		write(1, "rra\n", 4);
	if (*a == NULL || (*a)->first->next == NULL)
		return ;
	tmp = (*a)->first;
	while (tmp->next)
	{
		tmp_1 = tmp;
		tmp = tmp->next;
	}
	tmp->next = (*a)->first;
	tmp_1->next = NULL;
	begin = tmp;
	(*a)->first = begin;
}

void	reverse_rotate_b(t_stack **a, t_stack **b, int bol)
{
	t_elem *tmp;
	t_elem *tmp_1;
	t_elem *begin;

	(void)*a;
	if (bol)
		write(1, "rrb\n", 4);
	if (*b == NULL || (*b)->first->next == NULL)
		return ;
	tmp = (*b)->first;
	while (tmp->next)
	{
		tmp_1 = tmp;
		tmp = tmp->next;
	}
	tmp->next = (*b)->first;
	tmp_1->next = NULL;
	begin = tmp;
	(*b)->first = begin;
}

void	reverse_rotate_both(t_stack **a, t_stack **b, int bol)
{
	reverse_rotate_a(a, b, 0);
	reverse_rotate_b(a, b, 0);
	if (bol)
		write(1, "rrr\n", 4);
}
