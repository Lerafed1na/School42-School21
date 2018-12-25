/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:36:28 by wned              #+#    #+#             */
/*   Updated: 2018/12/17 17:37:56 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

static t_fdlist	*ft_find_fd(int fd, t_fdlist **gnl)
{
	t_fdlist *temp;

	temp = *gnl;
	while (temp)
	{
		if (temp->fd == fd)
			return (temp);
		temp = temp->next;
	}
	if (!temp && (temp = (t_fdlist*)malloc(sizeof(t_fdlist))))
	{
		temp->text = NULL;
		temp->fd = fd;
		temp->next = *gnl;
		*gnl = temp;
	}
	return (temp);
}

void			ft_cut(t_fdlist *temp, char **line)
{
	char	*begin;
	char	*tail;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (temp->text[i] && temp->text[i] != '\n')
		i++;
	begin = ft_strsub(temp->text, 0, i);
	if (temp->text[i] == '\n')
		i++;
	if (!(tail = ft_strnew(ft_strlen(temp->text) - i)))
		return ;
	while (temp->text[i + len])
	{
		tail[len] = temp->text[i + len];
		len++;
	}
	*line = begin;
	ft_strdel(&temp->text);
	temp->text = tail;
}

int				read_more(t_fdlist *gnl, char *buf)
{
	char	*text;
	int		ret;

	if (!(gnl->text))
		gnl->text = ft_strnew(0);
	while ((ret = read(gnl->fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		text = ft_strjoin(gnl->text, buf);
		ft_strdel(&(gnl->text));
		gnl->text = text;
		if (ft_strchr(buf, '\n'))
			return (1);
	}
	if (ret == 0 && gnl->text[0])
		return (1);
	return (ret);
}

int				get_next_line(const int fd, char **line)
{
	static t_fdlist *gnl;
	t_fdlist		*tmp;
	int				i;
	char			*buf;

	if (fd < 0 || !line || !(tmp = ft_find_fd(fd, &gnl)))
		return (-1);
	if (!(buf = ft_memalloc(BUFF_SIZE + 1)))
		return (-1);
	if ((i = read_more(tmp, buf)) > 0)
		ft_cut(tmp, line);
	free(buf);
	return (i);
}
