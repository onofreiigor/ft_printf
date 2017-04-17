/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:56:26 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:44 by ionofrei         ###   ########.fr       */
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
