/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:43:38 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:43:40 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_push_stack(t_stk **stack, int num)
{
	t_stk *temp;

	if (stack == NULL)
	{
		*stack = (t_stk *)malloc(sizeof(t_stk));
		(*stack)->next = NULL;
		(*stack)->num = num;
	}
	else
	{
		temp = (t_stk *)malloc(sizeof(t_stk));
		temp->next = *stack;
		temp->num = num;
		*stack = temp;
	}
}
