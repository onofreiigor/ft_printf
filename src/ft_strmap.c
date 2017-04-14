/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:45:22 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/04 10:49:19 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *temp;
	char *res;

	res = NULL;
	if (s)
	{
		if ((res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		{
			temp = res;
			while (*s)
				*temp++ = f(*s++);
			*temp = '\0';
		}
	}
	return (res);
}
