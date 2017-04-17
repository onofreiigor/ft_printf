/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:56:19 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:44 by ionofrei         ###   ########.fr       */
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
