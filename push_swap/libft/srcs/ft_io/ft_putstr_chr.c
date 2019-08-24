/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_chr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:35:00 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:35:02 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_chr(char const *s, char *c)
{
	size_t	len;

	if (s != NULL)
	{
		len = ft_strlen_chr(s, c);
		write(1, s, len);
	}
}
