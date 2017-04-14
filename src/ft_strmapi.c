/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 14:16:23 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/04 10:57:18 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	index;

	res = NULL;
	index = 0;
	if (s)
	{
		if ((res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		{
			while (s[index])
			{
				res[index] = f(index, s[index]);
				index++;
			}
			res[index] = '\0';
		}
	}
	return (res);
}
