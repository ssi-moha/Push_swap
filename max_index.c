/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 10:17:33 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/27 11:17:26 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		max_index(t_stack **a)
{
	t_elem	*tmp;
	int		ret;

	tmp = (*a)->first;
	ret = 0;
	while (tmp)
	{
		if (tmp->index > ret)
			ret = tmp->index;
		tmp = tmp->next;
	}
	return (ret);
}

int		min_index(t_stack **a)
{
	t_elem	*tmp;
	int		ret;

	tmp = (*a)->first;
	ret = tmp->index;
	while (tmp)
	{
		if (tmp->index < ret)
			ret = tmp->index;
		tmp = tmp->next;
	}
	return (ret);
}
