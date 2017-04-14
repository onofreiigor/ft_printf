/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 14:39:36 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/07 17:44:33 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstnadd(t_list **alst, void *content, size_t size_content, int pos)
{
	t_list *temp;
	t_list *new_elem;

	new_elem = ft_lstnew(content, size_content);
	if (!*alst)
		return ;
	temp = *alst;
	while (temp->next && pos--)
		temp = temp->next;
	if (!pos)
		new_elem->next = temp->next;
	temp->next = new_elem;
}
