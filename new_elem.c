/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 14:12:04 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/09 05:48:13 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	new_elem(t_stack *stack, int i)
{
	t_elem *add;

	add = (t_elem*)malloc(sizeof(t_elem));
	add->num = i;
	add->next = stack->first;
	stack->first = add;
}
