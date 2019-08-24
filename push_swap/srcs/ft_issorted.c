/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 20:03:26 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 20:03:28 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_issorted(t_stack *stacks)
{
	int i;

	i = -1;
	while (++i < stacks->size_a - 1)
		if (stacks->s_a[i].val > stacks->s_a[i + 1].val)
			return (0);
	if (stacks->size_b != 0)
		return (0);
	return (1);
}
