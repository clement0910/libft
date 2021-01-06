/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 20:14:28 by csapt             #+#    #+#             */
/*   Updated: 2021/01/05 20:48:29 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*current;

	if (lst && f)
	{
		if (!(current = ft_lst_new((*f)(lst->content))))
			return (NULL);
		first = current;
		lst = lst->next;
		while (lst)
		{
			if (!(current->next = ft_lst_new((*f)(lst->content))))
			{
				ft_lst_clear(&first, (*del));
				return (NULL);
			}
			current = current->next;
			lst = lst->next;
		}
		return (first);
	}
	return (NULL);
}
