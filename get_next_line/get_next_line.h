/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 17:41:27 by wned              #+#    #+#             */
/*   Updated: 2018/12/17 18:00:31 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000

# include "stdlib.h"
# include <fcntl.h>
# include <unistd.h>

typedef struct			s_fdlist
{
	char				*text;
	int					fd;
	struct s_fdlist		*next;
}						t_fdlist;

int						get_next_line(const int fd, char **line);

#endif
