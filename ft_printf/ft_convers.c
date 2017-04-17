/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:48:58 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:49:21 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

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

static void		ft_star(const char *format, int *par, va_list param)
{
	if (ft_strlen(ft_strchr(format, '.')) < ft_strlen(ft_strchr(format, '*')))
		par[0] = va_arg(param, int);
	if (ft_strlen(ft_strchr(format, '.')) > ft_strlen(ft_strrchr(format, '*')))
		par[1] = va_arg(param, int);
}

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
