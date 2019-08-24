/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_roundd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:58:16 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:58:17 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long	ft_itoa_round(double tmp)
{
	int		sign;

	sign = 1;
	if (tmp < 0)
	{
		tmp = -tmp;
		sign = -1;
	}
	if ((long)(tmp * 10) - (long)tmp * 10 >= 5)
		return (((long)(tmp) + 1) * sign);
	return ((long)tmp * sign);
}
