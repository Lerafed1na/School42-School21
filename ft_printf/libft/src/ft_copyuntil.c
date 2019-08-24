/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyuntil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:14:47 by wned              #+#    #+#             */
/*   Updated: 2019/07/20 13:14:51 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_copyuntil(char *str, int c)
{
	char	*res;
	char	*symb;

	if (!str)
		return (NULL);
	symb = ft_strchr(str, c);
	if (!symb)
		return (NULL);
	res = ft_strnew(symb - str);
	if (!res)
		return (NULL);
	res = ft_strncpy(res, str, symb - str);
	return (res);
}
