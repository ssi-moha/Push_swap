/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 10:49:13 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/28 16:21:45 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**cp_av(int ac, char **av)
{
	char	**tab;
	int		i;

	i = 1;
	if (ac == 2)
		return (ft_strsplit(av[1], ' '));
	tab = (char**)malloc(sizeof(char*) * ac);
	while (i <= ac - 1)
	{
		tab[i - 1] = ft_strdup(av[i]);
		i++;
	}
	tab[i - 1] = 0;
	return (tab);
}

int		check_arg(int ac, char **av)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	tab = cp_av(ac, av);
	while (i < ac - 1)
	{
		j = 0;
		if (!tab[i])
			return (-1);
		if (!check_limit(tab[i]))
			return (free_tab(tab, ac));
		while (tab[i][j])
		{
			tab[i][j] == '-' ? j++ : j;
			if (!ft_isdigit(tab[i][j]))
				return (free_tab(tab, ac));
			j++;
		}
		i++;
	}
	if (!check_dup(ac, tab))
		return (free_tab(tab, ac));
	return (free_tab(tab, ac) + 1);
}
