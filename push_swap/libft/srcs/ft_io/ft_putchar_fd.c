/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:33:11 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:33:13 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	unsigned char tmp;

	if (!fd)
		return ;
	tmp = (unsigned char)c;
	if (tmp <= 127)
		write(fd, &tmp, 1);
	else
	{
		tmp = 192 + ((unsigned char)c / 64);
		write(fd, &tmp, 1);
		tmp = 128 + ((unsigned char)c % 64);
		write(fd, &tmp, 1);
	}
}
