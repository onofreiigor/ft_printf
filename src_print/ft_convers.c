/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 14:04:19 by okosiako          #+#    #+#             */
/*   Updated: 2017/02/20 14:04:21 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

/*
** delete struct's parameters
** typedef struct		s_param
** {
**	void			*data;
**	char			*width;
**	char			*prec;
**	char			*sign;
**	char			*flag;
**	int				res;
**	char			type;
** }					t_param;
*/

static void		ft_del(t_param **e)
{
	if (ft_strchr("xXoOpuU", (*e)->type))
		ft_memdel(&((*e)->data));
	if ((*e)->type == 's')
		ft_memdel(&((*e)->data));
	ft_memdel((void **)&((*e)->width));
	ft_memdel((void **)&((*e)->prec));
	ft_memdel((void **)&((*e)->sign));
	ft_memdel((void **)&((*e)->flag));
	ft_memdel((void **)&(*e));
}

/*
** for wildcards
*/

static void		ft_star(const char *format, int *par, va_list param)
{
	if (ft_strlen(ft_strchr(format, '.')) < ft_strlen(ft_strchr(format, '*')))
		par[0] = va_arg(param, int);
	if (ft_strlen(ft_strchr(format, '.')) > ft_strlen(ft_strrchr(format, '*')))
		par[1] = va_arg(param, int);
}

/*
** takes cuted format string from % to conversion and va_list
** ft_wp makes width and precisions parametrs and flags string
** makes decision about types in else c & C & undefined conversions
*/

int				ft_conv(const char *format, va_list param)
{
	t_param			*e;
	int				*par;
	int				res;

	e = ft_memalloc(sizeof(t_param));
	par = ft_memalloc(sizeof(int) * 2);
	e->flag = NULL;
	e->flag = ft_wp(format, par);
	if (ft_strchr(format, '*'))
		ft_star(format, par, param);
	e->type = format[ft_strlen(format) - 1];
	if (ft_strchr("dDi", e->type))
		ft_di(format, e, param);
	else if (ft_strchr("xXoOpuU", e->type))
		ft_xopu(format, e, param);
	else if (ft_strchr("sS", e->type))
		ft_s(format, e, param);
	else
		ft_c(format, e, param);
	res = ft_make_elem(par, e);
	ft_del(&e);
	ft_memdel((void **)&par);
	return (res);
}
