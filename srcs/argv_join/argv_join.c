/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_join.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:09:33 by csapt             #+#    #+#             */
/*   Updated: 2021/04/27 13:41:35 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*argv_copy(char *str, va_list arg)
{
	char	*str_arg;

	str_arg = va_arg(arg, char *);
	if (str_arg == NULL)
		return (ft_str2freejoin(str, str_arg));
	else
		return (ft_strfreejoin(str, str_arg));
}

static char	*argv_parse(char *fmt, va_list arg)
{
	int		x;
	char	*str;

	x = 0;
	str = NULL;
	while (fmt[x])
	{
		if (fmt[x] == '%' && fmt[x + 1] == 's')
		{
			str = argv_copy(str, arg);
			if (!str)
				return (NULL);
			x += 2;
		}
		if (fmt[x] == '\0')
			return (str);
		str = ft_str2freejoin(str, ft_strdupto(fmt + x, '%'));
		if (!str)
		{
			free(str);
			return (NULL);
		}
		x = x + ft_strlento(fmt + x, '%');
	}
	return (str);
}

char	*argv_join(const char *fmt, ...)
{
	char	*ret;
	va_list	arg;

	va_start(arg, fmt);
	if (!fmt)
		return (NULL);
	if (ft_chrcmp((char *)fmt, '%'))
		ret = ft_strdup(fmt);
	else
		ret = argv_parse((char *)fmt, arg);
	va_end(arg);
	return (ret);
}
