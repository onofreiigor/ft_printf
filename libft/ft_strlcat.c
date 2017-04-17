/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:20 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:45 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t index;
	size_t a_d;

	a_d = 0;
	while (dst[a_d] && a_d < size)
		a_d++;
	index = a_d;
	while (src[a_d - index] && a_d < size - 1)
	{
		dst[a_d] = src[a_d - index];
		a_d++;
	}
	if (index < size)
		dst[a_d] = '\0';
	return (ft_strlen((char *)src) + index);
}
