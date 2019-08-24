/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_values.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 20:03:15 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 20:03:17 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_values(t_stack *stacks, int i, int check)
{
	stacks->sorted[i] = (int)check;
	stacks->s_a[i].val = (int)check;
	stacks->s_a[i].ind = 0;
	stacks->s_a[i].stay = 0;
}
