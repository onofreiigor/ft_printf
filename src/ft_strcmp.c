/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:21:20 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/05 18:17:39 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	index;

	index = 0;
	if (s1 && s2)
	{
		while (s2[index] && s1[index])
		{
			if ((unsigned char)s2[index] == (unsigned char)s1[index])
				index++;
			else
				return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		}
		return ((unsigned char)s1[index] - (unsigned char)s2[index]);
	}
	return (0);
}
