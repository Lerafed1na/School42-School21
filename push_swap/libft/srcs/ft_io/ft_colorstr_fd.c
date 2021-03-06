/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colorstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:31:41 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:31:44 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_colorstr_fd(const char *s1, const char *s2, const char *s3, int fd)
{
	int i;

	i = 0;
	while (s1[i])
		write(fd, &s1[i++], 1);
	i = 0;
	while (s2[i])
		write(fd, &s2[i++], 1);
	i = 0;
	while (s3[i])
		write(fd, &s3[i++], 1);
}
