/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:42:56 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:42:58 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pop_stack(t_stk **stack)
{
	t_stk	*tmp;
	int		i;

	if (stack == NULL)
		return (-1);
	tmp = *stack;
	*stack = (*stack)->next;
	i = tmp->num;
	tmp->next = NULL;
	free(tmp);
	return (i);
}
