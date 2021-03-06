/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 16:25:06 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/26 16:36:34 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		stack_len(t_stack **a)
{
	t_elem	*tmp;
	int		i;

	i = 0;
	if (!*a)
		return (0);
	tmp = (*a)->first;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
