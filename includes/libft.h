/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 20:18:44 by csapt             #+#    #+#             */
/*   Updated: 2021/01/07 16:32:15 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFFER_SIZE 32

# include "libft_conversion.h"
# include "libft_lst.h"
# include "libft_mem.h"
# include "libft_print.h"
# include "libft_str.h"
# include "libft_time.h"
# include "libft_vector.h"
# include "ft_printf/libftprintf.h"

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_check_index(char *buf);
int				get_next_zero(char **str, char *buf);
int				get_next_backn(char **str, char *buf, int fd, long *error);
int				get_next_line(int fd, char **line);
size_t			ft_strlen_gnl(char *str);
char			*ft_strcpy(char *src, char *dst);
char			*ft_strjoin_cpy(char *s1);
char			*ft_strjoin_gnl(char *s1, char *s2);
char			*ft_strdup_gnl(const char *s1);

#endif
