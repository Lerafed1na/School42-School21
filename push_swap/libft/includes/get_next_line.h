/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:27:12 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:27:16 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1

# include "libft.h"

typedef struct		s_files
{
	char			*str;
	int				pos;
	int				end;
	int				fd;
	struct s_files	*next;
}					t_files;

int					get_next_line(const int fd, char **line);
#endif
