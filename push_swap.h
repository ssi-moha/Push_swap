/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 13:41:21 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/01/29 13:13:28 by ssi-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/includes/libft.h"
# include "get_next_line.h"
# include <limits.h>

typedef struct	s_elem
{
	int				num;
	int				index;
	struct s_elem	*next;
}				t_elem;
typedef struct	s_stack
{
	struct s_elem *first;
}				t_stack;
typedef struct	s_lim
{
	int min;
	int max;
	int sort;
}				t_lim;
int				stack_len(t_stack **a);
void			new_elem(t_stack *stack, int i);
char			**cp_av(int ac, char **av);
t_stack			*stack_arg(int ac, char **av);
t_stack			*new_stack(int i);
t_lim			init_struct(int ac);
int				*index_values(int ac, char **av);
int				mv_elem(t_stack *stack);
int				op_stack(t_stack **a, t_stack **b, char *str);
int				check_arg(int ac, char **av);
int				check_dup(int ac, char **av);
int				check_limit(char *str);
int				tab_len(char **tab);
int				is_sort(t_stack **a, t_stack **b);
int				max_index(t_stack **a);
int				bigger_med(t_stack **a, int med);
int				lower_med(t_stack **a, int med, int lim);
int				last_elem(t_stack **b);
int				next_up(t_stack **a, int med, int max);
int				next_low(t_stack **a, int med, int max);
int				check_not(t_stack **a, int max, int i);
void			swap_stack_a(t_stack **a, t_stack **b, int bol);
void			swap_stack_b(t_stack **a, t_stack **b, int bol);
void			swap_both(t_stack **a, t_stack **b, int bol);
void			push_b(t_stack **a, t_stack **b, int bol);
void			push_a(t_stack **a, t_stack **b, int bol);
void			rotate_a(t_stack **a, t_stack **b, int bol);
void			rotate_b(t_stack **a, t_stack **b, int bol);
void			rotate_both(t_stack **a, t_stack **b, int bol);
void			reverse_rotate_a(t_stack **a, t_stack **b, int bol);
void			reverse_rotate_b(t_stack **a, t_stack **b, int bol);
void			reverse_rotate_both(t_stack **a, t_stack **b, int bol);
void			check_stack(t_stack *a, t_stack *b);
void			free_stack(t_stack **a);
void			index_stack(t_stack *a, int *sort, int ac);
void			quick_sort(t_stack **a, t_stack **b, int ac);
void			tri_sort(t_stack **a, t_stack **b);
void			tri_five(t_stack **a, t_stack **b);
void			empty_a(t_stack **a, t_stack **b, int med, t_lim *lim);
void			fill_median(t_stack **median_b, t_stack **a, int *med,
		t_lim *lim);
void			search_inb(t_stack **a, t_stack **b, int med, t_lim *lim);
void			push_val(t_stack **a, t_stack **b, int med, t_lim *lim);
void			q_sort(t_stack **a, t_stack **b, t_lim *lim);
void			part_case(t_stack **a, t_stack **b, t_lim *lim);
int				free_tab(char **tab, int ac);
int				free_push(t_stack *a, t_stack *b, int *sort);
int				error_mess(void);
#endif
