/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 20:04:50 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 20:04:52 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sort_two(t_stack *stacks)
{
	if (!ft_issorted(stacks))
		ft_sa(stacks, 1);
}

void		ft_sort_three(t_stack *s)
{
	if (s->s_a[0].val < s->s_a[1].val &&
			s->s_a[1].val < s->s_a[2].val)
		return ;
	if (s->s_a[0].val > s->s_a[1].val &&
			s->s_a[1].val > s->s_a[2].val)
	{
		ft_sa(s, 1);
		ft_rra(s, 1);
	}
	else if (s->s_a[0].val < s->s_a[1].val &&
			s->s_a[1].val > s->s_a[2].val &&
			s->s_a[0].val < s->s_a[2].val)
	{
		ft_sa(s, 1);
		ft_ra(s, 1);
	}
	else if (s->s_a[0].val > s->s_a[1].val &&
			s->s_a[1].val < s->s_a[2].val &&
			s->s_a[0].val < s->s_a[2].val)
		ft_sa(s, 1);
	else if (s->s_a[0].val < s->s_a[1].val && s->s_a[1].val > s->s_a[2].val &&
			s->s_a[0].val > s->s_a[2].val)
		ft_rra(s, 1);
	else
		ft_ra(s, 1);
}

static void	ft_sorting(t_stack *s)
{
	int i;
	int tmp;
	int median;

	i = 0;
	median = s->sorted[2];
	while (s->size_b != 2)
	{
		tmp = s->s_a[i].val;
		if (tmp < median)
		{
			while (s->s_a[0].val != tmp)
			{
				if (i <= s->size_a / 2)
					ft_ra(s, 1);
				else
					ft_rra(s, 1);
			}
			ft_pb(s, 1);
			i = 0;
		}
		else
			i++;
	}
	ft_sort_three(s);
}

void		ft_sort_five(t_stack *s)
{
	if (!ft_issorted(s))
		ft_sorting(s);
}
