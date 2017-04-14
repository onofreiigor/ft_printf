/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:01:37 by okosiako          #+#    #+#             */
/*   Updated: 2016/11/30 19:03:45 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n &&
			((unsigned char *)s1)[index] == ((unsigned char *)s2)[index])
		index++;
	if (index == n ||
			((unsigned char *)s1)[index] == ((unsigned char *)s2)[index])
		return (0);
	return (((unsigned char *)s1)[index] - ((unsigned char *)s2)[index]);
}
