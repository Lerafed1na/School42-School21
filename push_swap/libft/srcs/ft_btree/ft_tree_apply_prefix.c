/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_apply_prefix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:30:50 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:30:52 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tree_apply_prefix(t_tree *head, void (*applyf)(void *))
{
	if (!head)
		return ;
	(applyf)(head->data);
	ft_tree_apply_prefix(head->left, applyf);
	ft_tree_apply_prefix(head->right, applyf);
}
