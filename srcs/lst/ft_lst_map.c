/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 20:14:28 by csapt             #+#    #+#             */
/*   Updated: 2021/04/16 09:11:29 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*current;

	if (lst && f)
	{
		current = ft_lst_new((*f)(lst->content));
		if (current == NULL)
			return (NULL);
		first = current;
		lst = lst->next;
		while (lst)
		{
			current->next = ft_lst_new((*f)(lst->content));
			if (!(current->next == NULL))
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
