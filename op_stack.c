/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 19:31:29 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/27 17:08:54 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		det_index(char *str)
{
	if (!ft_strcmp("sa", str))
		return (0);
	if (!ft_strcmp("sb", str))
		return (1);
	if (!ft_strcmp("ss", str))
		return (2);
	if (!ft_strcmp("pa", str))
		return (3);
	if (!ft_strcmp("pb", str))
		return (4);
	if (!ft_strcmp("ra", str))
		return (5);
	if (!ft_strcmp("rb", str))
		return (6);
	if (!ft_strcmp("rr", str))
		return (7);
	if (!ft_strcmp("rra", str))
		return (8);
	if (!ft_strcmp("rrb", str))
		return (9);
	if (!ft_strcmp("rrr", str))
		return (10);
	else
		return (-1);
}

int		send_error(void)
{
	write(2, "Error\n", 6);
	return (-1);
}

int		op_stack(t_stack **a, t_stack **b, char *str)
{
	static void (*tab[11])(t_stack **, t_stack **, int bol);
	int			index;

	if (!ft_strcmp("", str))
		return (1);
	index = det_index(str);
	tab[0] = swap_stack_a;
	tab[1] = swap_stack_b;
	tab[2] = swap_both;
	tab[3] = push_a;
	tab[4] = push_b;
	tab[5] = rotate_a;
	tab[6] = rotate_b;
	tab[7] = rotate_both;
	tab[8] = reverse_rotate_a;
	tab[9] = reverse_rotate_b;
	tab[10] = reverse_rotate_both;
	if (index < 0 || str[0] == '\0')
		return (send_error());
	else if (index <= 10)
		tab[index](a, b, 0);
	else
		return (0);
	return (1);
}
