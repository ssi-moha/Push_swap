/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_elem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 15:18:41 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/27 11:16:50 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		mv_elem(t_stack *stack)
{
	t_elem	*elem;
	int		ret;

	if (stack == NULL)
		exit(-1);
	elem = stack->first;
	ret = elem->num;
	if (elem->next)
		stack->first = elem->next;
	else
		stack->first = NULL;
	free(elem);
	return (ret);
}
