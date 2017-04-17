/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:56:56 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:45 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_l(long long n)
{
	int res;

	res = 0;
	if (n == LLONG_MIN)
	{
		return (ft_putstr("9223372036854775808"));
	}
	if (n < 0)
	{
		ABS(n);
		res += ft_putchar('-');
	}
	if (n > 9)
		res += ft_putnbr_l(n / 10);
	res += ft_putchar((n % 10) + '0');
	n /= 10;
	return (res);
}
