/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:42:22 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:42:24 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		c_s(t_spec *spec, char *str)
{
	int		len;

	if (!str)
	{
		if (!(spec->cont = ft_strdup("(null)")))
			return (0);
		return (1);
	}
	len = ft_strlen(str);
	if (!(spec->cont = ft_strnew(len)))
		return (0);
	ft_memmove(spec->cont, str, len);
	return (1);
}

int		c_c(t_spec *spec, int c)
{
	if (!(spec->cont = ft_strnew(1)))
		return (-1);
	spec->cont[0] = (unsigned char)c;
	if (!c)
		NEG = 1;
	return (1);
}
