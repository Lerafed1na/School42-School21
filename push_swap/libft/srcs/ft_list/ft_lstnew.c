/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:37:44 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:37:46 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *elem;

	if (!(elem = (t_list *)ft_memalloc(sizeof(t_list))))
		return ((t_list *)0);
	if (!content || !content_size)
	{
		elem->content = (void *)0;
		elem->content_size = 0;
	}
	else
	{
		if (!(elem->content = ft_memalloc(content_size)))
		{
			free(elem);
			return ((t_list *)0);
		}
		elem->content_size = content_size;
		ft_memcpy(elem->content, content, content_size);
	}
	elem->next = (t_list *)0;
	return (elem);
}
