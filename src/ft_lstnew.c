/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 14:00:54 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/04 10:56:06 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *temp;

	temp = NULL;
	if ((temp = (t_list *)malloc(sizeof(t_list))))
	{
		if (content == NULL)
		{
			temp->content = NULL;
			temp->content_size = 0;
		}
		else
		{
			temp->content = ft_memcpy(ft_memalloc(content_size), content,
					content_size);
			temp->content_size = content_size;
		}
		temp->next = NULL;
	}
	return (temp);
}
