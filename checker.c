/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 12:03:24 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/28 16:16:18 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		free_all(t_stack *a, t_stack *b, char *str, int *sort)
{
	free_stack(&a);
	free_stack(&b);
	ft_strdel(&str);
	free(sort);
	return (0);
}

int		free_push(t_stack *a, t_stack *b, int *sort)
{
	free_stack(&a);
	free_stack(&b);
	free(sort);
	return (0);
}

int		main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	char	*str;
	char	**tab;
	int		*sort;

	if (argc < 2 || ft_strlen(argv[1]) == 0)
		return (0);
	if (!check_arg(argc, argv))
		return (error_mess());
	tab = cp_av(argc, argv);
	a = stack_arg(argc, tab);
	sort = index_values(argc, tab);
	b = NULL;
	index_stack(a, sort, argc);
	while (get_next_line(0, &str) > 0)
		if (op_stack(&a, &b, str) == -1)
			return (0);
	check_stack(a, b);
	free_all(a, b, str, sort);
	return (free_tab(tab, argc));
}
