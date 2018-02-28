/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 12:17:31 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/27 15:29:19 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			tab_len(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
		i++;
	return (i);
}

t_stack		*stack_arg(int ac, char **av)
{
	t_stack *a;
	int		num;
	int		i;

	num = 0;
	if (ac == 2)
		i = tab_len(av) - 1;
	else
		i = ac - 2;
	a = NULL;
	while (i > -1)
	{
		num = ft_atoi(av[i]);
		if (!a)
			a = new_stack(num);
		else
			new_elem(a, num);
		i--;
	}
	return (a);
}

void		index_stack(t_stack *a, int *sort, int ac)
{
	int		i;
	t_elem	*tmp;

	if (!a)
		return ;
	tmp = a->first;
	while (tmp)
	{
		i = 0;
		while (i < ac)
		{
			if (sort[i] == tmp->num)
			{
				tmp->index = i + 1;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}
