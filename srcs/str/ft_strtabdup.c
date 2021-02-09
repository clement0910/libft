/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:19:46 by csapt             #+#    #+#             */
/*   Updated: 2021/02/09 19:41:36 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strtabdup(char **src)
{
	int		x;
	int		srclen;
	char	**tab;

	x = 0;
	if ((srclen = ft_tablen(src)) == 0)
		return (NULL);
	if (!(tab = malloc((srclen + 1) * sizeof(char*))))
		return (NULL);
	while (x < srclen)
	{
		if (!(tab[x] = ft_strdup(src[x])))
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
