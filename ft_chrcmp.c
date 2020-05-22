/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 20:11:40 by csapt             #+#    #+#             */
/*   Updated: 2020/05/22 20:11:42 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_chrcmp(char *str, char c)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == c)
			return (0);
		x++;
	}
	return (1);
}
