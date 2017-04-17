/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:35 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:50 by ionofrei         ###   ########.fr       */
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
