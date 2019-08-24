/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 20:02:12 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 20:02:14 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_usage_error(char c)
{
	ft_putstr_fd("./checker: illegal option -- ", 2);
	ft_putchar_fd(c, 2);
	ft_putstr_fd("\nusage: ./checker [-chv] [arguments ...]\n", 2);
	exit(EXIT_FAILURE);
}

void	ft_args_error(t_stack *stacks)
{
	if (stacks->flags & FLAG_C)
	{
		ft_putstr_fd(RED, 2);
		ft_putstr_fd("Error\n", 2);
		ft_putstr_fd(NC, 2);
	}
	else
		ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
