/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 13:57:14 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/27 14:47:38 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack(int i)
{
	t_stack *new;

	new = (t_stack*)malloc(sizeof(t_stack));
	new_elem(new, i);
	new->first->next = NULL;
	return (new);
}
