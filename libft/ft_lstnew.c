/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:56:22 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:44 by ionofrei         ###   ########.fr       */
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
