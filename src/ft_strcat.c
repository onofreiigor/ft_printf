/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:13:58 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/04 11:20:15 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int index;
	int b;

	index = 0;
	b = 0;
	while (dest[index])
		index++;
	while (src[b])
		dest[index++] = src[b++];
	dest[index] = '\0';
	return (dest);
}
