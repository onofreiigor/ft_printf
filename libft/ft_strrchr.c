/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:32 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:49 by ionofrei         ###   ########.fr       */
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
