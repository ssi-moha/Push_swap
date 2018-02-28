/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 16:16:17 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/26 16:18:18 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_stack(t_stack *a, t_stack *b)
{
	t_elem *tmp;

	if (!a && !b)
		return ;
	tmp = a->first;
	if (tmp)
		while (tmp->next)
		{
			if (tmp->num > tmp->next->num)
			{
				write(2, "KO\n", 3);
				return ;
			}
			tmp = tmp->next;
		}
	if (stack_len(&b))
		write(2, "KO\n", 3);
	else
		write(2, "OK\n", 3);
}
