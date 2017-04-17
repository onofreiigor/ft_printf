/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:23 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:45 by ionofrei         ###   ########.fr       */
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
