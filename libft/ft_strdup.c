/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:11 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:45 by ionofrei         ###   ########.fr       */
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
