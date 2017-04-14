/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 14:43:46 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/04 10:42:30 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *res;
	char *temp;

	res = NULL;
	if (s)
	{
		if ((res = (char *)malloc(sizeof(char) * (len + 1))))
		{
			temp = res;
			while (*(s + start) && len--)
				*temp++ = *(s + start++);
			*temp = '\0';
		}
	}
	return (res);
}
