/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:07:39 by wned              #+#    #+#             */
/*   Updated: 2019/07/20 13:07:43 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	while (dst[++i] && i < size)
		;
	while (src[++j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (i + ft_strlen(src + j));
}
