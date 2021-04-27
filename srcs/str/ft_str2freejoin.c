/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2freejoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 13:05:48 by csapt             #+#    #+#             */
/*   Updated: 2021/04/27 13:43:21 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_null_argv(char *s1, char *s2)
{
	char	*ret;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL && s2)
	{
		ret = ft_strdup(s2);
		free(s2);
		return (ret);
	}
	else if (s1 && s2 == NULL)
	{
		ret = ft_strdup(s1);
		free(s1);
		return (ret);
	}
	else
		return (NULL);
}

char	*ft_str2freejoin(char *s1, char *s2)
{
	char	*str;
	int		x;
	int		y;

	y = 0;
	x = 0;
	if (s1 == NULL || s2 == NULL)
		return (check_null_argv(s1, s2));
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[x])
	{
		str[x] = s1[x];
		x++;
	}
	free(s1);
	while (s2[y])
		str[x++] = s2[y++];
	free(s2);
	str[x] = '\0';
	return (str);
}
