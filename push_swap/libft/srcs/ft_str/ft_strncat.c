/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:49:00 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:49:02 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = dest;
	while (*tmp)
		tmp++;
	while (src[i] && n--)
		*tmp++ = src[i++];
	*tmp = '\0';
	return (dest);
}
