/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:41:42 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:41:45 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_f(const char *str, t_spec *spec, int len, int count)
{
	if (spec)
	{
		while (count--)
		{
			ft_putstr_chr(str, spec->pos);
			ft_putstr(spec->cont);
			if (SPEC == 'c' && NEG)
			{
				++len;
				ft_putchar(CONT[ft_strlen(CONT)]);
			}
			len -= spec->del;
			len += ft_strlen(spec->cont);
			str += spec->del + ft_strlen_chr(str, spec->pos);
			spec++;
		}
		ft_putstr(str);
		return (len);
	}
	else
	{
		write(1, str, len);
		return (len);
	}
}
