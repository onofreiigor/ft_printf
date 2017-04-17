/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:25 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:45 by ionofrei         ###   ########.fr       */
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
