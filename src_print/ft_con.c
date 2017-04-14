/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_con.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 16:59:02 by okosiako          #+#    #+#             */
/*   Updated: 2017/02/13 16:59:05 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

/*
** small
** hh - signed char (int8_t)
** ll - lont lont int
** h - short int (int16_t)
** l - lont int
** j, z - size_t
** big
** hh, ll - long long
** h, l - long
** last - long long
*/

intmax_t	ft_data(const char *format, t_param *elem, va_list param)
{
	if (ft_strchr("di", elem->type))
	{
		if (ft_strchr(format, 'h'))
			return (ft_strcmp(ft_strchr(format, 'h'), ft_strrchr(format, 'h')) ?
			(int8_t)va_arg(param, int) : (int16_t)va_arg(param, int));
		else if (ft_strchr(format, 'l'))
			return (ft_strcmp(ft_strchr(format, 'l'), ft_strrchr(format, 'l')) ?
			va_arg(param, long long) : va_arg(param, long));
		else if (ft_strchr(format, 'j') || ft_strchr(format, 'z'))
			return (va_arg(param, size_t));
		else
			return (va_arg(param, int));
	}
	else
	{
		if (ft_strcmp(ft_strchr(format, 'h'), ft_strrchr(format, 'h')) ||
		ft_strcmp(ft_strchr(format, 'l'), ft_strrchr(format, 'l')))
			return ((long long)va_arg(param, unsigned long long));
		else if (ft_strchr(format, 'h') || ft_strchr(format, 'l'))
			return ((long)va_arg(param, unsigned long long));
		else
			return ((long long)va_arg(param, unsigned long long));
	}
}

/*
** makes struct for diD
*/

void		ft_di(const char *format, t_param *elem, va_list param)
{
	long long		num;

	num = ft_data(format, elem, param);
	elem->res = 1;
	elem->sign = num < 0 ? ft_strdup("-") : NULL;
	ABS(num);
	if (num || (!num && !ft_strchr(format, '.')))
		elem->data = (void *)(size_t)num;
	else
		elem->data = NULL;
	COUNTER(num, 10, elem->res);
}

/*
** small and X
** hh - unsigned char (uint8_t)
** ll - unsigned long long (uintmax_t)
** h - unsigned short int (uint16_t)
** l - unsigned long int
** big and small with j, z
** j, z - size_t && uintmax_t (uintmax_t)
*/

uintmax_t	ft_data_x(const char *format, t_param *elem, va_list param)
{
	if (ft_strcmp(ft_strchr(format, 'h'), ft_strrchr(format, 'h')) ||
		ft_strcmp(ft_strchr(format, 'l'), ft_strrchr(format, 'l')))
		return ((ft_strchr("uoxX", elem->type) && ft_strchr(format, 'h') ?
	(uint8_t)va_arg(param, unsigned long long) : va_arg(param, uintmax_t)));
	else if (ft_strchr(format, 'h') || ft_strchr(format, 'l'))
		return ((ft_strchr("uoxX", elem->type) && ft_strchr(format, 'h') ?
		(uint16_t)va_arg(param, uintmax_t) : va_arg(param, unsigned long)));
	else if (ft_strchr(format, 'j') || ft_strchr(format, 'z') ||
			ft_strchr("pOU", elem->type))
		return (va_arg(param, uintmax_t));
	else
		return (va_arg(param, unsigned int));
}

/*
** making struct elem for "xXoOpuU" parameter
*/

void		ft_xopu(const char *format, t_param *elem, va_list param)
{
	size_t		addr;
	char		*res;

	res = NULL;
	addr = ft_data_x(format, elem, param);
	if (addr || (!addr && !ft_strchr(format, '.')))
	{
		if (ft_strchr("xp", elem->type))
			res = ft_uitoa_base(addr, 'x', 16);
		else if (elem->type == 'X')
			res = ft_uitoa_base(addr, 'X', 16);
		else if (ft_strchr("oO", elem->type))
			res = ft_uitoa_base(addr, 'o', 8);
		else if (ft_strchr("uU", elem->type))
			res = ft_uitoa_base(addr, 'd', 10);
	}
	elem->sign = (elem->type == 'p') ? ft_strdup("0x") : NULL;
	elem->res = ft_strlen(res);
	elem->data = (void *)res;
}
