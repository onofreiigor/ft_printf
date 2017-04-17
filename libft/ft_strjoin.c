/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:19 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:45 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;

	res = NULL;
	if (s1 && s2)
	{
		if ((res = (char *)malloc(sizeof(char) *
						(ft_strlen(s1) + ft_strlen(s2) + 1))))
		{
			ft_bzero(res, (ft_strlen(s1) + ft_strlen(s2) + 1));
			ft_strcat(res, s1);
			ft_strcat(res, s2);
		}
	}
	return (res);
}

char	*ft_strjoin_n(char *one, char *two, char *three)
{
	char	*res;
	size_t	size;

	if (ft_strcmp(one, "/"))
		size = ft_strlen(one) + ft_strlen(two) + ft_strlen(three);
	else
		size = ft_strlen(two) + ft_strlen(three);
	res = ft_memalloc(sizeof(char) * (size + 1));
	(ft_strcmp(one, "/")) ? res = ft_strcpy(res, one) : 0;
	res = ft_strcat(res, two);
	res = ft_strcat(res, three);
	return (res);
}
