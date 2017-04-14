/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:48:56 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/06 18:21:54 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert(long nbr)
{
	char			*result;
	long			temp;
	unsigned int	len;

	len = 0;
	result = NULL;
	len += (nbr < 0) ? 1 : 0;
	nbr = (nbr < 0) ? -nbr : nbr;
	temp = nbr;
	while (temp > 0)
	{
		temp /= 10;
		len++;
	}
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	result[len--] = '\0';
	while (nbr > 0)
	{
		result[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	result[0] = (len == 0) ? '-' : result[0];
	return (result);
}

char		*ft_itoa(long nbr)
{
	char	*result;

	result = NULL;
	if (nbr == 0)
		return (ft_strdup("0"));
	return (convert((long)nbr));
}
