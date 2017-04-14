/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 12:57:44 by okosiako          #+#    #+#             */
/*   Updated: 2017/01/16 10:52:54 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long long num, char base, int b)
{
	char		*res;
	char		*base_base;
	size_t		size;
	long long	temp;

	res = NULL;
	base_base = (base <= 'Z') ? "0123456789ABCDEF" : "0123456789abcdef";
	size = (num < 0 && b == 10) ? 2 : 1;
	temp = num;
	COUNTER(temp, b, size);
	res = ft_strnew(size);
	ABS(num);
	while (num >= (long long)b)
	{
		res[--size] = base_base[num % b];
		num /= b;
	}
	res[--size] = base_base[num % b];
	res[0] = (res[0]) ? res[0] : '-';
	return (res);
}

char	*ft_uitoa_base(unsigned long long num, char base, int b)
{
	char				*res;
	char				*base_base;
	size_t				size;
	unsigned long long	temp;

	res = NULL;
	base_base = (base <= 'Z') ? "0123456789ABCDEF" : "0123456789abcdef";
	size = 1;
	temp = num;
	COUNTER(temp, b, size);
	res = ft_strnew(size);
	while (num >= (size_t)b)
	{
		res[--size] = base_base[num % b];
		num /= b;
	}
	res[--size] = base_base[num % b];
	res[0] = (res[0]) ? res[0] : '-';
	return (res);
}
