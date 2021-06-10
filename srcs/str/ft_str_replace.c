/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:24:37 by csapt             #+#    #+#             */
/*   Updated: 2021/06/10 17:26:00 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_replace(char **s1, char **s2)
{
	char	*tmp;

	tmp = ft_strdup(*s1);
	if (!tmp)
		return (1);
	free(*s1);
	*s1 = ft_strdup(*s2);
	if (!(*s1))
	{
		free(tmp);
		return (1);
	}
	free(*s2);
	*s2 = ft_strdup(tmp);
	if (!(*s2))
	{
		free(tmp);
		return (1);
	}
	free(tmp);
	return (0);
}
