/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 20:08:36 by csapt             #+#    #+#             */
/*   Updated: 2021/01/09 11:14:13 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_tab(char **tab)
{
	int	x;

	x = 0;
	if (!tab)
		return ;
	while (tab[x] != NULL)
	{
		ft_putendl_fd(tab[x], 1);
		x++;
	}
}
