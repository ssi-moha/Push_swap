/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger_med.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 10:31:30 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/17 11:27:53 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		lower_med(t_stack **a, int med, int mark)
{
	t_elem *tmp;

	tmp = (*a)->first;
	while (tmp)
	{
		if (tmp->index < med && tmp->index >= mark)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int		bigger_med(t_stack **a, int med)
{
	t_elem *tmp;

	tmp = (*a)->first;
	while (tmp)
	{
		if (tmp->index >= med)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
