/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_delone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 20:13:53 by csapt             #+#    #+#             */
/*   Updated: 2021/01/05 20:47:09 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_delone(t_list *lst, void (*del)(void *))
{
	if (!lst || !lst->content)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
