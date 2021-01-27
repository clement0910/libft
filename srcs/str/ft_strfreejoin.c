/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfreejoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 07:14:24 by csapt             #+#    #+#             */
/*   Updated: 2021/01/27 09:31:24 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfreejoin(char *s1, char *s2)
{
	char	*str;
	int		x;
	int		y;

	y = 0;
	x = 0;
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (!(str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	while (s1[x])
	{
		str[x] = s1[x];
		x++;
	}
	free(s1);
	while (s2[y])
	{
		str[x] = s2[y];
		y++;
		x++;
	}
	str[x] = '\0';
	return (str);
}
