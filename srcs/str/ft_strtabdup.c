/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:19:46 by csapt             #+#    #+#             */
/*   Updated: 2021/04/16 09:30:56 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strtabdup(char **src)
{
	int		x;
	int		srclen;
	char	**tab;

	x = 0;
	srclen = ft_tablen(src);
	if (srclen == 0)
		return (NULL);
	tab = malloc((srclen + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (x < srclen)
	{
		tab[x] = ft_strdup(src[x]);
		if (tab[x] == NULL)
		{
			tab[x] = NULL;
			ft_free_tab(tab);
			return (NULL);
		}
		x++;
	}
	tab[x] = NULL;
	return (tab);
}
