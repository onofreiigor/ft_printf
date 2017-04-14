/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:58:49 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/05 11:18:08 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ds;
	const char	*sr;
	int			index;

	ds = dest;
	sr = src;
	index = 0;
	while (n--)
	{
		ds[index] = sr[index];
		index++;
	}
	return (dest);
}
