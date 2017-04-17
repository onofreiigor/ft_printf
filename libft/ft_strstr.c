/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:34 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:50 by ionofrei         ###   ########.fr       */
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
