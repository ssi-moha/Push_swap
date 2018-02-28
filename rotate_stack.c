/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 22:25:31 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/23 15:40:36 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **a, t_stack **b, int bol)
{
	t_elem *tmp;
	t_elem *bot;

	(void)*b;
	if (bol)
		write(1, "ra\n", 3);
	if (*a == NULL || (*a)->first->next == NULL)
		return ;
	bot = (*a)->first->next;
	tmp = (*a)->first;
	tmp->next = NULL;
	(*a)->first = bot;
	while (bot->next)
		bot = bot->next;
	bot->next = tmp;
}

void	rotate_b(t_stack **a, t_stack **b, int bol)
{
	t_elem *tmp;
	t_elem *bot;

	(void)*a;
	if (bol)
		write(1, "rb\n", 3);
	if (*b == NULL || (*b)->first->next == NULL)
		return ;
	bot = (*b)->first->next;
	tmp = (*b)->first;
	tmp->next = NULL;
	(*b)->first = bot;
	while (bot->next)
		bot = bot->next;
	bot->next = tmp;
}

void	rotate_both(t_stack **a, t_stack **b, int bol)
{
	if (bol)
		write(1, "rr\n", 3);
	rotate_a(a, b, 0);
	rotate_b(a, b, 0);
}
