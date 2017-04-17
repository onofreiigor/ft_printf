/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:57:36 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:50 by ionofrei         ###   ########.fr       */
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
