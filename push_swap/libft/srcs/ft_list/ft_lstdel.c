/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:36:47 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:36:49 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*next;

	if (!(*alst) || !alst || !del)
		return ;
	while (*alst)
	{
		next = (*alst)->next;
		(*del)((*alst)->content, (*alst)->content_size);
		ft_memdel((void **)alst);
		*alst = next;
	}
}
