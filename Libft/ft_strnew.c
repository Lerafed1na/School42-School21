/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 12:14:59 by wned              #+#    #+#             */
/*   Updated: 2018/11/27 13:36:09 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	char	*new_begin;
	size_t	len;

	len = size + 1;
	new = (char *)malloc(sizeof(char) * (len));
	new_begin = new;
	if (new == NULL)
		return (NULL);
	while (len--)
	{
		*new = '\0';
		new++;
	}
	return (new_begin);
}
