/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:17:55 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/05 13:39:57 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*res;
	unsigned int	index;

	index = 0;
	res = NULL;
	if (*str == (char)c)
		res = (char *)str;
	while (*str++)
	{
		if (*str == (char)c)
			res = (char *)str;
	}
	return (res);
}
