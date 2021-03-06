/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_make.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:49:01 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:49:24 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

void		*ft_create_set(int c, size_t n)
{
	char	*s;

	s = ft_strnew(sizeof(char) * n);
	s = ft_memset(s, c, n);
	return (s);
}

void		ft_width(const char *format, t_param *e, int w)
{
	int		size;

	size = (e->type == 's' || e->type == 'S') ?
		e->res : ft_strlen(e->sign) + ft_strlen(e->prec) + e->res;
	if (w > size)
	{
		if (ft_strchr(e->flag, '0') && !ft_strchr(e->flag, '-') &&
				!ft_strchr(format, '.') && !ft_strchr("csS%", e->type))
			e->prec = ft_create_set('0', (w - size));
		else if (ft_strchr(e->flag, '0') && !ft_strchr(e->flag, '-')
				&& ft_strchr("csS%", e->type))
			e->width = ft_create_set('0', (w - size));
		else
			e->width = ft_create_set(' ', (w - size));
	}
}

int			ft_print(int *par, t_param *e)
{
	int res;

	res = 0;
	res += !ft_strchr(e->flag, '-') ? ft_putstr(e->width) : 0;
	res += ft_putstr(e->sign);
	res += ft_putstr(e->prec);
	if (ft_strchr("dDi", e->type))
	{
		if (e->data || (!e->data && !ft_strchr(e->flag, '.') && !par[1]))
			res += ft_putnbr_l((long long)e->data);
		else if (!e->data && par[1])
			res += ft_putnbr_l((long long)e->data);
		else if (par[0])
			res += ft_putchar(' ');
	}
	else if (!ft_strchr("xXoOpuUsSC", e->type))
		res += ft_putchar((char)e->data);
	res += (ft_strchr("xXoOpuU", e->type)) ? ft_putstr((char *)e->data) : 0;
	res += (e->type == 's') ? write(1, ((char *)e->data), e->res) : 0;
	res += (e->type == 'S') ? ft_wputstr((wchar_t *)e->data, e->res) : 0;
	res += (e->type == 'C') ? ft_wputchar((wchar_t)e->data) : 0;
	res += ft_strchr(e->flag, '-') ? ft_putstr(e->width) : 0;
	return (res);
}

int			ft_create_elem(int *par, t_param *e)
{
	int res;

	res = 0;
	if (ft_strchr(e->flag, '+') && !e->sign && ft_strchr("dDi", e->type))
		e->sign = ft_strdup("+");
	if (par[1] > e->res && !(ft_strchr("csSC%", e->type)))
		e->prec = ft_create_set('0', (par[1] - e->res));
	else if (par[1] < e->res && ft_strchr("sS", e->type) &&
			ft_strchr(e->flag, '.'))
		e->res = par[1];
	if (ft_strchr(e->flag, ' ') && !ft_strchr(e->flag, '+') && !e->sign &&
			ft_strchr("diD", e->type))
		e->sign = ft_strdup(" ");
	if (ft_strchr(e->flag, '#') && ft_strchr("xXoO", e->type))
	{
		if (ft_strchr("xX", e->type) && e->data && ((char *)e->data)[0] != '0')
			e->sign = ft_strdup((e->type == 'x') ? "0x" : "0X");
		else if ((ft_strchr("oO", e->type) && e->data && !e->prec &&
					((char *)e->data)[0] != '0') || (ft_strchr("oO", e->type) &&
					!par[1] && !e->data && ft_strchr(e->flag, '#')))
			e->sign = ft_strdup("0");
	}
	ft_width(e->flag, e, par[0]);
	return (ft_print(par, e));
}
