/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:35:32 by wned              #+#    #+#             */
/*   Updated: 2019/07/20 12:35:38 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int		ft_printf(const char *f, ...)
{
	int		i;
	int		k;
	int		res;
	va_list	ap;

	i = -1;
	res = 0;
	k = 0;
	va_start(ap, f);
	while (f[++i])
	{
		if (f[i] == '%')
			res += process_token(f + i + 1, &i, ap);
		else
		{
			k = ft_putstr_until((char *)f + i, '%');
			res += k;
			i += k - 1;
		}
	}
	va_end(ap);
	return (res);
}
