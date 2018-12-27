/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 13:15:35 by wned              #+#    #+#             */
/*   Updated: 2018/12/26 16:31:07 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "Libft/libft.h"

char	*read_file(int fd)
{
	char	*tetris;
	char	*buffer;
	int		ret;

	buffer = ft_strnew(21);
	if ((fd < 0 || read(fd, buffer, 0) < 0))
		return (NULL);
	tetris = ft_strnew(0);
	while ((ret = read(fd, buffer, 21)) >= 20)
	{
		buffer[ret] = '\0';
		tetris = ft_strjoin(tetris, buffer);
		if (ft_strlen(tetris) > 546)
			return (NULL);
	}
	ft_memdel((void**)&buffer);
	tetris = ft_strjoin(tetris, "\0");
	return (tetris);
}
