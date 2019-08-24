/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dinit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 20:02:03 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 20:02:05 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dinit(t_stack *stacks, int status)
{
	free(stacks->s_a);
	free(stacks->s_b);
	free(stacks->sorted);
	if (status)
	{
		ft_args_error(stacks);
		exit(EXIT_FAILURE);
	}
}
