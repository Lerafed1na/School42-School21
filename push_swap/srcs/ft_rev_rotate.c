/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 20:04:11 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 20:04:13 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *stacks, int print)
{
	int		i;
	t_el	tmp;

	if (stacks->size_a <= 1)
		return ;
	i = stacks->size_a;
	tmp = stacks->s_a[stacks->size_a - 1];
	while (--i)
		stacks->s_a[i] = stacks->s_a[i - 1];
	stacks->s_a[0] = tmp;
	if (print != 0 && print != -1)
		ft_putendl("rra");
	else if (print != -1 && stacks->flags & FLAG_V)
		ft_printer(stacks, "rra");
}

void	ft_rrb(t_stack *stacks, int print)
{
	int		i;
	t_el	tmp;

	if (stacks->size_b <= 1)
		return ;
	i = stacks->size_b;
	tmp = stacks->s_b[stacks->size_b - 1];
	while (--i)
		stacks->s_b[i] = stacks->s_b[i - 1];
	stacks->s_b[0] = tmp;
	if (print != 0 && print != -1)
		ft_putendl("rrb");
	else if (print != -1 && stacks->flags & FLAG_V)
		ft_printer(stacks, "rrb");
}

void	ft_rrr(t_stack *stacks, int print)
{
	ft_rra(stacks, -1);
	ft_rrb(stacks, -1);
	if (print)
		ft_putendl("rrr");
	if (stacks->flags & FLAG_V)
		ft_printer(stacks, "rrr");
}
