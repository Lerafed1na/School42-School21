/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:29:36 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:29:39 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_insert_data(t_tree **head, void *data, int (*cmp)(void *, void *))
{
	t_tree *node;

	if (!*head)
	{
		*head = ft_create_node(data);
		return ;
	}
	node = *head;
	if (cmp(data, node->data) < 0)
	{
		if (node->left)
			ft_insert_data(&node->left, data, cmp);
		else
			node->left = ft_create_node(data);
	}
	else if (cmp(data, node->data) > 0)
	{
		if (node->right)
			ft_insert_data(&node->right, data, cmp);
		else
			node->right = ft_create_node(data);
	}
}
