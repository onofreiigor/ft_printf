/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 18:29:29 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/04 10:53:27 by okosiako         ###   ########.fr       */
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
