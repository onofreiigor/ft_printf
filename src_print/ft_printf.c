/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 14:48:44 by okosiako          #+#    #+#             */
/*   Updated: 2017/01/13 12:55:59 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

/*
** for undefined cases - else if
** returns temp - cuted string from % to conversion
*/

void	ft_choose(const char *format, char **temp)
{
	size_t	index;

	index = 1;
	while (format[index])
	{
		if (ft_strchr(CONV, format[index]))
		{
			*temp = ft_strsub(format, 0, index + 1);
			return ;
		}
		else if (!ft_strchr("hljz", format[index]) && ft_isalpha(format[index]))
		{
			*temp = ft_strsub(format, 0, index + 1);
			return ;
		}
		else if (!ft_isdigit(format[index]) &&
			!ft_strchr("%+- #.*", format[index]) && !ft_isalpha(format[index]))
		{
			*temp = ft_strsub(format, 0, index + 1);
			return ;
		}
		index++;
	}
	*temp = ft_strsub(format, 0, index + 1);
}

/*
** takes str from main, returns number of printed elements
*/

int		ft_printf(const char *restrict format, ...)
{
	va_list		param;
	char		*temp;
	size_t		index;
	int			val;

	va_start(param, format);
	val = 0;
	index = -1;
	while (format[++index])
		if (format[index] != '%')
		{
			val++;
			write(1, &format[index], 1);
		}
		else
		{
			ft_choose(&format[index], &temp);
			val += ft_conv(temp, param);
			index += ft_strlen(temp) - 1;
			ft_memdel((void**)&temp);
		}
	return (val);
}
