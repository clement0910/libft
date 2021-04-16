/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 20:28:37 by csapt             #+#    #+#             */
/*   Updated: 2021/04/16 11:50:36 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strdup_gnl(char *src)
{
	int		x;
	char	*ret;

	x = 0;
	ret = malloc((ft_strlento(src, '\n') + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	while (src[x] != '\n' && src[x] != '\0')
	{
		ret[x] = src[x];
		x++;
	}
	ret[x] = '\0';
	return (ret);
}

static	char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		x;
	int		y;
	char	*str;

	x = -1;
	y = 0;
	if (s1 == NULL)
		return (ft_strdup_gnl(s2));
	str = malloc(((ft_strlento(s1, '\0') + ft_strlento(s2, '\n') + 1)
				* sizeof(char)));
	if (str == NULL)
		return (NULL);
	while (s1[++x])
		str[x] = s1[x];
	while (s2[y] && s2[y] != '\n')
	{
		str[x] = s2[y];
		x++;
		y++;
	}
	str[x] = '\0';
	free(s1);
	return (str);
}

static void	sub_modif(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str[x] != '\n' && str[x] != '\0')
		x++;
	x++;
	while (str[x] != '\0')
	{
		str[y] = str[x];
		x++;
		y++;
	}
	while (y < x)
	{
		str[y] = '\0';
		y++;
	}
}

static	int	check_error(int fd, char **line, char **buf, long *error)
{
	*line = NULL;
	if (BUFFER_SIZE <= 0)
		return (-1);
	if (*buf == NULL)
	{
		*buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (*buf == NULL)
			return (-1);
		*buf[0] = '\0';
	}
	*error = 1;
	if (*error == 1 && (fd < 0 || !line || BUFFER_SIZE <= 0))
		return (-1);
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*buf = NULL;
	long		error;

	if (check_error(fd, line, &buf, &error) == -1)
		return (-1);
	if (ft_chrcmp(buf, '\n') == 0)
	{
		sub_modif(buf);
		*line = ft_strjoin_gnl(*line, buf);
		if (ft_chrcmp(buf, '\n') == 0)
			return (1);
	}
	while (ft_chrcmp(buf, '\n') == 1 && error != 0)
	{
		error = read(fd, buf, BUFFER_SIZE);
		if (fd < 0 || error < 0)
			return (-1);
		buf[error] = '\0';
		*line = ft_strjoin_gnl(*line, buf);
	}
	if (error == 0)
		buf = ft_freestr(buf);
	else
		error = 1;
	return (error);
}
