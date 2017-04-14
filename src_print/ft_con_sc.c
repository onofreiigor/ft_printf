/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_con_sc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 16:41:13 by okosiako          #+#    #+#             */
/*   Updated: 2017/02/21 16:41:16 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

/*
** making struct elem for "sS" parameters
*/

void		ft_s(const char *format, t_param *elem, va_list param)
{
	char		*res;
	wchar_t		*wres;

	elem->sign = NULL;
	res = NULL;
	wres = NULL;
	if (elem->type == 'S' || (elem->type == 's' && ft_strchr(format, 'l')))
	{
		wres = va_arg(param, wchar_t *);
		if (!wres)
			wres = NULL;
		elem->res = ft_wstrlen(wres);
		elem->data = (void *)wres;
		elem->type = 'S';
	}
	else
	{
		res = va_arg(param, char *);
		if (!res)
			res = "(null)";
		elem->res = ft_strlen(res);
		elem->data = (void *)ft_strdup(res);
	}
}

/*
** making struct elem for "cC" and all undefined parameters
*/

void		ft_c(const char *format, t_param *elem, va_list param)
{
	wchar_t	wch;
	char	ch;

	elem->sign = NULL;
	elem->res = 1;
	if (elem->type == 'C' || (elem->type == 'c' && ft_strchr(format, 'l')))
	{
		wch = va_arg(param, wchar_t);
		elem->data = (!wch) ? NULL : (void *)(size_t)wch;
		elem->type = 'C';
	}
	else
	{
		ch = (elem->type == 'c') ? va_arg(param, int) : elem->type;
		elem->data = (ch || (!ch && !ft_strchr(format, '.'))) ?
					(void *)(size_t)ch : NULL;
		elem->type = 'c';
	}
}
