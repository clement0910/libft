/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:42:00 by csapt             #+#    #+#             */
/*   Updated: 2021/01/06 17:38:36 by csapt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LST_H
# define LIBFT_LST_H

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lst_new(void *content);
void				ft_lst_addfront(t_list **alst, t_list *new);
void				ft_lst_addback(t_list **alst, t_list *new);
int					ft_lst_size(t_list *lst);
t_list				*ft_lst_last(t_list *lst);
void				ft_lst_delone(t_list *lst, void (*del)(void *));
void				ft_lst_clear(t_list **lst, void (*del)(void *));
void				ft_lst_iter(t_list *lst, void (*f)(void *));
t_list				*ft_lst_map(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
int					ft_lst_maxstrlen(t_list **maplist);

#endif