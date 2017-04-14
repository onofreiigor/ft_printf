/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wputchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 16:43:25 by okosiako          #+#    #+#             */
/*   Updated: 2017/02/21 16:43:32 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_wputchar_2(const uint32_t c, char *str)
{
	if (c <= BIT21)
	{
		str[0] = ((c & 1835008) >> 18) | 240;
		str[1] = ((c & 258048) >> 12) | 128;
		str[2] = ((c & 4032) >> 6) | 128;
		str[3] = (c & 63) | 128;
	}
	else if (c <= BIT26)
	{
		str[0] = ((c & 50331648) >> 24) | 248;
		str[1] = ((c & 16515072) >> 18) | 128;
		str[2] = ((c & 258048) >> 12) | 128;
		str[3] = ((c & 4032) >> 6) | 128;
		str[4] = (c & 63) | 128;
	}
	else
	{
		str[0] = ((c & 1073741824) >> 30) | 252;
		str[1] = ((c & 1056964608) >> 24) | 128;
		str[2] = ((c & 16515072) >> 18) | 128;
		str[3] = ((c & 258048) >> 12) | 128;
		str[4] = ((c & 4032) >> 6) | 128;
		str[5] = (c & 63) | 128;
	}
}

int			ft_wputchar(const uint32_t c)
{
	char		*str;
	int			res;

	str = ft_strnew(6);
	res = 0;
	if (c <= BIT7)
		str[0] = c;
	else if (c <= BIT11)
	{
		str[0] = ((c & 1984) >> 6) | 192;
		str[1] = (c & 63) | 128;
	}
	else if (c <= BIT16)
	{
		str[0] = ((c & 61440) >> 12) | 224;
		str[1] = ((c & 4032) >> 6) | 128;
		str[2] = (c & 63) | 128;
	}
	else
		ft_wputchar_2(c, str);
	res = write(1, str, sizeof(char)) + write(1, &str[1], ft_strlen(&str[1]));
	ft_strdel(&str);
	return (res);
}

int			ft_wputstr(const wchar_t *wstr, int size)
{
	int		res;
	size_t	a;

	res = 0;
	a = 0;
	while (a < (size_t)size)
	{
		res += ft_wputchar(wstr[a]);
		a++;
	}
	return (res);
}
