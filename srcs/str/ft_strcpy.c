/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:15:10 by csapt             #+#    #+#             */
/*   Updated: 2021/01/19 14:25:36 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *src, char *dst)
{
	int x;

	x = 0;
	if (!dst || !src)
		return (NULL);
	while (src[x] && dst[x])
	{
		dst[x] = src[x];
		x++;
	}
	while (dst[x])
	{
		dst[x] = '\0';
		x++;
	}
	return (dst);
}
