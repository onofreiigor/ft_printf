/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:56:37 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:44 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long index;

	if (dst - src < 0)
	{
		index = -1;
		while (index++ < (long)len - 1)
			*(char *)(dst + index) = *(char *)(src + index);
	}
	else if (dst - src > 0)
	{
		index = len;
		while (index-- > 0)
			*(char *)(dst + index) = *(char *)(src + index);
	}
	return (dst);
}
