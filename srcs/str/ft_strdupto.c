/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupto.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:29:38 by csapt             #+#    #+#             */
/*   Updated: 2021/02/09 19:42:12 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupto(char *src, char c)
{
	int		x;
	char	*dest;

	x = 0;
	dest = malloc(ft_strlento(src, c) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[x] && src[x] != c)
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
