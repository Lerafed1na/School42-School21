/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:38:44 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:39:19 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc;

	cdest = (char *)dst;
	csrc = (char *)src;
	if (src == dst)
		return (dst);
	while (n--)
		*cdest++ = *csrc++;
	return (dst);
}
