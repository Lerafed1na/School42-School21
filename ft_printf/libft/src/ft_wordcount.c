/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:13:57 by wned              #+#    #+#             */
/*   Updated: 2019/07/20 13:14:00 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(const char *str, char del)
{
	int	i;
	int	wc;
	int	flag;

	if (!str || del == '\0')
		return (-1);
	i = -1;
	wc = 0;
	flag = 0;
	while (str[++i])
	{
		if (str[i] == del)
			flag = 0;
		else if (!flag)
		{
			flag = 1;
			wc++;
		}
	}
	return (wc);
}
