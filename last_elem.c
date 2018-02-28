/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 11:02:00 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/27 11:18:07 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		last_elem(t_stack **b)
{
	t_elem	*tmp;
	int		i;

	if (stack_len(b) < 2)
		return (0);
	tmp = (*b)->first;
	while (tmp)
	{
		i = tmp->index;
		tmp = tmp->next;
	}
	return (i);
}
