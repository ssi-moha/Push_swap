/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 12:35:29 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/28 14:15:06 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		next_up(t_stack **a, int med, int max)
{
	t_elem	*tmp;
	int		i;

	i = 0;
	tmp = (*a)->first;
	while (tmp && tmp->index < med)
	{
		if (i > max / 2)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int		next_low(t_stack **a, int med, int max)
{
	t_elem	*tmp;
	int		i;

	i = 0;
	tmp = (*a)->first;
	while (tmp && tmp->index >= med)
	{
		if (i > max / 2)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
