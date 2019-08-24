/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 20:03:59 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 20:04:02 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack *stacks, int print)
{
	int		i;

	if (stacks->size_a == 0)
		return ;
	i = stacks->size_b;
	while (--i >= 0)
		stacks->s_b[i + 1] = stacks->s_b[i];
	stacks->s_b[0] = stacks->s_a[0];
	i = -1;
	while (++i < stacks->size_a - 1)
		stacks->s_a[i] = stacks->s_a[i + 1];
	stacks->size_a--;
	stacks->size_b++;
	if (stacks->flags & FLAG_V)
		ft_printer(stacks, "pb");
	if (print == 1)
		ft_putendl("pb");
}

void	ft_pa(t_stack *stacks, int print)
{
	int		i;

	if (stacks->size_b == 0)
		return ;
	i = stacks->size_a;
	while (--i >= 0)
		stacks->s_a[i + 1] = stacks->s_a[i];
	stacks->s_a[0] = stacks->s_b[0];
	i = -1;
	while (++i < stacks->size_b - 1)
		stacks->s_b[i] = stacks->s_b[i + 1];
	stacks->size_b--;
	stacks->size_a++;
	if (stacks->flags & FLAG_V)
		ft_printer(stacks, "pa");
	if (print == 1)
		ft_putendl("pa");
}
