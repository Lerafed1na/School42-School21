/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:40:16 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:40:18 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char		*cdest;
	const char	*csrc;

	cdest = (char *)destination;
	csrc = (const char*)source;
	if (destination == source)
		return (destination);
	if (cdest > csrc)
	{
		while (n)
		{
			cdest[n - 1] = csrc[n - 1];
			n--;
		}
	}
	while (n)
	{
		*cdest++ = *csrc++;
		n--;
	}
	return (destination);
}
