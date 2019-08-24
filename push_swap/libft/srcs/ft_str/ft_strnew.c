/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:50:08 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:50:10 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(++size))
		return (0);
	str = ft_memalloc(size);
	if (str == NULL)
		return (NULL);
	str = ft_memset(str, '\0', size);
	return (str);
}
