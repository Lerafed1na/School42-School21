/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:20:01 by wned              #+#    #+#             */
/*   Updated: 2019/07/20 13:20:05 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_ltoa_base(long long int n, int base)
{
	char			*hex;
	int				i;
	int				l;
	char			*res;

	if (n == (-9223372036854775807 - 1) && base == 10)
		return (ft_strdup("-9223372036854775808"));
	if (n == 0)
		return (ft_strdup("0"));
	i = 0;
	hex = "0123456789abcdef";
	l = ft_nbrlen_base(ft_abs(n), base) + ((n < 0 && base == 10) ? 1 : 0);
	res = ft_strnew(l);
	(n < 0 && base == 10) ? res[i++] = '-' : (0);
	n < 0 ? n *= -1 : (0);
	while (n)
	{
		res[--l] = hex[n % base];
		n /= base;
	}
	return (res);
}
