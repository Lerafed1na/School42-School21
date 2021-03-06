/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:28:13 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:28:16 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_print_array(int *array, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		ft_printf("arr[%d] = %d\n", i, array[i]);
		i++;
	}
}
