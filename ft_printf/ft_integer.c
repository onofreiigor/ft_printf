/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:49:03 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:49:27 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

char	*ft_concat_str(char *dest, char src)
{
	char	*trash;

	trash = ft_strnew(ft_strlen(dest) + 1);
	trash = ft_strcpy(trash, dest);
	trash[ft_strlen(dest)] = src;
	ft_memdel((void**)&dest);
	return (trash);
}

char	*ft_prec_width(const char *format, int *par)
{
	size_t	a;
	char	*res;

	a = 0;
	res = ft_strnew(0);
	while (format[a] && format[a + 1])
	{
		if (ft_strchr("%+- #", format[a]))
		{
			res = ft_concat_str(res, format[a]);
			if (ft_isdigit(format[a + 1]) && ft_atoi(format + a + 1) > 0)
				par[0] = ft_atoi(format + a + 1);
		}
		a++;
	}
	par[1] = ft_strrchr(format, '.') ? ft_atoi(ft_strrchr(format, '.') + 1) : 0;
	if (ft_strchr(format, '.'))
		res = ft_concat_str(res, '.');
	a = -1;
	while (ft_strchr(&format[++a], '0'))
		if (!ft_isdigit(format[ft_strchr(format + a, '0') - format - 1]))
			return (res = ft_concat_str(res, '0'));
	return (res);
}
