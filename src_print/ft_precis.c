/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 16:10:07 by okosiako          #+#    #+#             */
/*   Updated: 2017/01/31 16:10:10 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

/*
** add one symbol to the end of dest
*/

char	*ft_addstr(char *dest, char src)
{
	char	*trash;

	trash = ft_strnew(ft_strlen(dest) + 1);
	trash = ft_strcpy(trash, dest);
	trash[ft_strlen(dest)] = src;
	ft_memdel((void**)&dest);
	return (trash);
}

/*
** par[0] - width
** par[1] - prec
** res - flags string
*/

char	*ft_wp(const char *format, int *par)
{
	size_t	a;
	char	*res;

	a = 0;
	res = ft_strnew(0);
	while (format[a] && format[a + 1])
	{
		if (ft_strchr("%+- #", format[a]))
		{
			res = ft_addstr(res, format[a]);
			if (ft_isdigit(format[a + 1]) && ft_atoi(format + a + 1) > 0)
				par[0] = ft_atoi(format + a + 1);
		}
		a++;
	}
	par[1] = ft_strrchr(format, '.') ? ft_atoi(ft_strrchr(format, '.') + 1) : 0;
	if (ft_strchr(format, '.'))
		res = ft_addstr(res, '.');
	a = -1;
	while (ft_strchr(&format[++a], '0'))
		if (!ft_isdigit(format[ft_strchr(format + a, '0') - format - 1]))
			return (res = ft_addstr(res, '0'));
	return (res);
}
