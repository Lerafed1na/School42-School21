/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:38:49 by wned              #+#    #+#             */
/*   Updated: 2018/11/21 17:25:06 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	int		file;

	if (argc == 1)
		return (write(1, "File name missing.\n", 19));
	if (argc > 2)
		return (write(1, "Too many arguments.\n", 20));
	file = open(argv[1], O_RDONLY);
	while (read(file, &c, 1) != 0)
		write(1, &c, 1);
	close(file);
	return (0);
}
