/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:42:53 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/28 13:51:50 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*end_index(char **av, int arg, int ac)
{
	int *sort;
	int i;

	i = 0;
	sort = (int*)malloc(sizeof(int) * ac);
	while (arg > 0)
	{
		sort[i] = ft_atoi(av[arg - 1]);
		i++;
		arg--;
	}
	return (sort);
}

int		*index_values(int ac, char **av)
{
	int *sort;
	int arg;
	int i;
	int j;

	arg = ac - 1;
	if (ac == 2)
		arg = tab_len(av);
	i = 0;
	sort = end_index(av, arg, ac);
	while (i < arg)
	{
		j = i + 1;
		while (j < arg)
		{
			if (sort[i] > sort[j])
				ft_swap(&sort[i], &sort[j]);
			j++;
		}
		i++;
	}
	return (sort);
}
