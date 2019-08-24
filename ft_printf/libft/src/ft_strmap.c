/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:08:14 by wned              #+#    #+#             */
/*   Updated: 2019/07/20 13:08:17 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	if (!s || !f)
		return (NULL);
	res = (char *)ft_strnew(ft_strlen(s));
	if (!res)
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = (*f)(s[i]);
	return (res);
}
