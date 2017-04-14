/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:16:54 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/04 11:22:22 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char			*st;
	unsigned int	index;

	index = 0;
	if (str)
	{
		st = (char *)str;
		while (st[index])
		{
			if (st[index] == (char)c)
				return (&st[index]);
			else
				index++;
		}
		return ((st[index] == (char)c) ? (&st[index]) : NULL);
	}
	return (NULL);
}
