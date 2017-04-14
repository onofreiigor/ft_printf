/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:14:33 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/05 14:53:11 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, int n)
{
	size_t	index;
	size_t	b;

	index = 0;
	b = 0;
	while (*(dest + index))
		index++;
	while (b < (size_t)n && *(src + b))
	{
		*(dest + index) = *(src + b);
		index++;
		b++;
	}
	*(dest + index) = '\0';
	return (dest);
}
