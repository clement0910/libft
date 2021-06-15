/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_addback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:38:47 by csapt             #+#    #+#             */
/*   Updated: 2021/06/15 12:01:57 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tab_addback(char **tab, char *src)
{
	int		i;
	char	**ret;

	i = 0;
	ret = malloc((ft_tablen(tab) + 2) * sizeof(char *));
	if (!ret)
		return (NULL);
	while (tab[i] != NULL)
	{
		ret[i] = ft_strdup(tab[i]);
		if (ret[i] == NULL)
			return (ft_free_tab(ret));
		i++;
	}
	ret[i] = ft_strdup(src);
	if (ret[i] == NULL)
		return (ft_free_tab(ret));
	i++;
	ret[i] = NULL;
	return (ret);
}
