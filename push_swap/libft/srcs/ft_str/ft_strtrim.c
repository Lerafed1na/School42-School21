/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wned <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 19:51:33 by wned              #+#    #+#             */
/*   Updated: 2019/08/10 19:51:35 by wned             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && i != j)
		i++;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j != i)
		j--;
	if (i == j)
		return (ft_strnew(0));
	newstr = ft_strsub(s, i, (j - i + 1));
	if (!newstr)
		return (NULL);
	return (newstr);
}
