/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:56:39 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:56:41 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_itoaneg(int *n, int *is_neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*is_neg = 1;
	}
}

char		*ft_itoa(int n)
{
	int		len;
	int		is_neg;
	int		ntmp;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = 2;
	ntmp = n;
	is_neg = 0;
	ft_itoaneg(&n, &is_neg);
	while (ntmp /= 10)
		len++;
	len += is_neg;
	if ((str = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
