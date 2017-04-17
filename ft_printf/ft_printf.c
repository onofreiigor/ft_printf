/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:49:05 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:49:10 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

void	ft_select(const char *format, char **temp)
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
				!ft_strchr("%+- #.*", format[index]) &&
				!ft_isalpha(format[index]))
		{
			*temp = ft_strsub(format, 0, index + 1);
			return ;
		}
		index++;
	}
	*temp = ft_strsub(format, 0, index + 1);
}

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
			ft_select(&format[index], &temp);
			val += ft_to_string(temp, param);
			index += ft_strlen(temp) - 1;
			ft_memdel((void**)&temp);
		}
	return (val);
}
