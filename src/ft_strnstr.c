/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:20:36 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/06 17:21:34 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, int n)
{
	int a;
	int b;
	int res;

	a = 0;
	b = 0;
	if (!*s2)
		return ((char *)(s1));
	while (s1[a] && a < n)
	{
		if (s1[a] == s2[0])
		{
			res = a;
			b = 0;
			while (s1[a + b] && s2[b] && s1[a + b] == s2[b] && b <= (n - a))
				b++;
			if (!s2[b])
				return ((char *)(&s1[res]));
		}
		a++;
	}
	return (NULL);
}
