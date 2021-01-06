/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:10:51 by csapt             #+#    #+#             */
/*   Updated: 2021/01/06 19:11:05 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_fd(unsigned int x, int fd)
{
	if (x < 10)
		ft_putchar_fd(x + 48, fd);
	else
	{
		ft_putunbr_fd(x / 10, fd);
		ft_putunbr_fd(x % 10, fd);
	}
}
