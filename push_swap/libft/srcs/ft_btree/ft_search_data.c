/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:29:49 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:29:53 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_search_data(t_tree *head, void *data, int (*cmp)(void *, void *))
{
	void *out;

	out = NULL;
	if (head)
	{
		out = ft_search_data(head->left, data, cmp);
		if (!out && (!(*cmp)(head->data, data)))
			out = head->data;
		if (!out)
			out = ft_search_data(head->right, data, cmp);
	}
	return (head);
}
