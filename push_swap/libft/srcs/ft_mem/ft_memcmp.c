/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:39:08 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:39:10 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char u1;
	unsigned char u2;

	while (n--)
	{
		u1 = *(unsigned char *)str1;
		u2 = *(unsigned char *)str2;
		if (u1 != u2)
			return (u1 - u2);
		str1++;
		str2++;
	}
	return (0);
}
