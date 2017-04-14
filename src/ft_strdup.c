/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:04:38 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/05 11:15:53 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	index;
	char			*str;

	index = 0;
	if (!s)
		return (0);
	while (s[index])
		index++;
	if ((str = (char *)malloc(sizeof(*str) * (index + 1))))
	{
		index = 0;
		while (s[index])
		{
			str[index] = s[index];
			index++;
		}
		str[index] = '\0';
		return (str);
	}
	return (0);
}
