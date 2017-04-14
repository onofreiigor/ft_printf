/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:59:25 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/05 11:18:56 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	unsigned int	index;

	ds = dest;
	sr = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		if (sr[index] != (unsigned char)c)
		{
			ds[index] = sr[index];
			index++;
		}
		else
		{
			ds[index] = (unsigned char)c;
			return (&ds[++index]);
		}
	}
	return (NULL);
}
