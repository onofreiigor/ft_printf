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

static void		ft_unable(t_param **e)
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

static void		ft_asterix(const char *format, int *par, va_list param)
{
	if (ft_strlen(ft_strchr(format, '.')) < ft_strlen(ft_strchr(format, '*')))
		par[0] = va_arg(param, int);
	if (ft_strlen(ft_strchr(format, '.')) > ft_strlen(ft_strrchr(format, '*')))
		par[1] = va_arg(param, int);
}

int				ft_to_string(const char *format, va_list param)
{
	t_param			*e;
	int				*par;
	int				res;

	e = ft_memalloc(sizeof(t_param));
	par = ft_memalloc(sizeof(int) * 2);
	e->flag = NULL;
	e->flag = ft_prec_width(format, par);
	if (ft_strchr(format, '*'))
		ft_asterix(format, par, param);
	e->type = format[ft_strlen(format) - 1];
	if (ft_strchr("dDi", e->type))
		ft_int_decimal(format, e, param);
	else if (ft_strchr("xXoOpuU", e->type))
		ft_hexa_format(format, e, param);
	else if (ft_strchr("sS", e->type))
		ft_print_str(format, e, param);
	else
		ft_print_char(format, e, param);
	res = ft_create_elem(par, e);
	ft_unable(&e);
	ft_memdel((void **)&par);
	return (res);
}
