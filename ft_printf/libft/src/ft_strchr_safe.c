/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:03:23 by wned              #+#    #+#             */
/*   Updated: 2019/07/20 13:03:27 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_safe(const char *s, int c)
{
	int i;

	if (!s)
		return (NULL);
	i = -1;
	while (s[++i])
		if (s[i] == c)
			return ((char *)(s + i));
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
