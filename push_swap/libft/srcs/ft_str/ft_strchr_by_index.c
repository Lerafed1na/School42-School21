/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_by_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:44:54 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:44:55 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr_by_index(char *str, int c)
{
	int j;

	j = 0;
	while (str[j])
	{
		if (str[j] == c)
			return (j);
		j++;
	}
	return (-1);
}
