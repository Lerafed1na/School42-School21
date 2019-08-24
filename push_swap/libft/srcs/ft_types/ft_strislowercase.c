/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strislowercase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 20:00:45 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 20:00:47 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strislowercase(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!ft_islower(*str++))
			return (0);
	return (1);
}
