/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:56:15 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:44 by ionofrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*res;

	res = NULL;
	if (lst)
	{
		temp = f(ft_lstnew(lst->content, lst->content_size));
		res = temp;
		lst = lst->next;
		while (lst)
		{
			if ((temp->next = f(ft_lstnew(lst->content, lst->content_size))))
			{
				temp = temp->next;
				lst = lst->next;
			}
			else
				return (NULL);
		}
	}
	return (res);
}
