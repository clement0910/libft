/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:54:01 by csapt             #+#    #+#             */
/*   Updated: 2021/02/09 19:42:56 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_H
# define LIBFT_STR_H

# include "libft_mem.h"

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isws(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *s1);
char			*ft_strdupto(char *src, char c);
char			**ft_strtabdup(char **src);
size_t			ft_strlen(const char *str);
size_t			ft_strlento(char *str, char c);
int				ft_tablen(char **tab);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
char			*ft_strrchr(const char *s, int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strfreejoin(char *s1, char *s2);
char			*ft_str2freejoin(char *s1, char *s2);
char			*ft_freestr(char *str);
int				ft_chrcmp(char *str, char c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strrev(char *str);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strcpy(char *src, char *dst);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);

#endif
