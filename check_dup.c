/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 14:13:27 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/28 16:22:05 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_dup(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	(void)ac;
	while (av[i])
	{
		j = 0;
		while (j < i)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
