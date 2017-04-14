/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 10:58:37 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/05 11:01:37 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	a;
	int	b;
	int	res;

	a = 0;
	if (s2[0] == '\0')
		return ((char *)(&s1[a]));
	while (s1[a])
	{
		res = a;
		b = 0;
		while (s1[a] == s2[b] && s1[a] && s2[b])
		{
			a++;
			b++;
		}
		if (s2[b] == '\0')
			return ((char *)(&s1[res]));
		a = res + 1;
	}
	return (NULL);
}
