/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:29:21 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:29:25 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_tree	*find_minimum(t_tree *current_node)
{
	if (current_node->left == NULL)
		return (current_node);
	return (find_minimum(current_node->left));
}

t_tree			*ft_delete_node(t_tree *head, void *data,
							int (*cmp)(void *, void *))
{
	t_tree *temp_node;

	if (head == NULL)
		return (NULL);
	else if (cmp(data, head->data) < 0)
		head->left = ft_delete_node(head->left, data, cmp);
	else if (cmp(data, head->data) > 0)
		head->right = ft_delete_node(head->right, data, cmp);
	else
	{
		if (head->left == NULL && head->right == NULL)
			head = NULL;
		else if (head->left == NULL)
			head = head->right;
		else if (head->right == NULL)
			head = head->left;
		else
		{
			temp_node = find_minimum(head->right);
			head->data = temp_node->data;
			head->right = ft_delete_node(head->right, temp_node->data, cmp);
		}
	}
	return (head);
}
