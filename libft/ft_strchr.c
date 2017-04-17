/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:03 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:45 by ionofrei         ###   ########.fr       */
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
