/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:57:23 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/05 18:02:04 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	int				len;
	char			*temp;

	temp = NULL;
	if (s)
	{
		start = 0;
		len = ft_strlen(s);
		while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			start++;
		while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
			len--;
		len -= start;
		if (len <= 0)
			return (ft_strnew(0));
		temp = ft_strsub(s, start, (size_t)(len));
	}
	return (temp);
}
