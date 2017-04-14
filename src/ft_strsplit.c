/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 10:48:34 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/05 18:21:00 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			word++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		a;
	size_t	begin;
	int		words;

	if (!s)
		return (0);
	if (!(split = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	i = 0;
	a = 0;
	words = ft_count(s, c);
	while (a < words && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		begin = i;
		while (s[i] && s[i] != c)
			i++;
		split[a++] = ft_strsub(s, begin, i - begin);
	}
	split[a] = 0;
	return (split);
}
