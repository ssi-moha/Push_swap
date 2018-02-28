/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:34:24 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/17 11:14:40 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sort(t_stack **a, t_stack **b)
{
	t_elem *tmp;

	tmp = (*a)->first;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	if (stack_len(b))
		return (0);
	return (1);
}
