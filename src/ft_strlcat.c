/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:15:08 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/01 16:55:44 by okosiako         ###   ########.fr       */
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
