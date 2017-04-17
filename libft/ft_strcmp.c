/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:07 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:45 by ionofrei         ###   ########.fr       */
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
