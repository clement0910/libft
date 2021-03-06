/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_gnl.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:27:14 by csapt             #+#    #+#             */
/*   Updated: 2021/04/16 11:55:01 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_GNL_H
# define LIBFT_GNL_H

# define BUFFER_SIZE 4096

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>

int				get_next_line(int fd, char **line);

#endif
