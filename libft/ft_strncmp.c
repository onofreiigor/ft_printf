/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:26 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:45 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	while (index < n && (*(s2 + index) || *(s1 + index)))
	{
		if (index < n && *((unsigned char*)s2 + index) ==
				*((unsigned char *)s1 + index))
			index++;
		else
			return (*((unsigned char *)s1 + index) -
					*((unsigned char *)s2 + index));
	}
	return (0);
}
