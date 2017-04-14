/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okosiako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 14:03:40 by okosiako          #+#    #+#             */
/*   Updated: 2016/12/07 17:36:49 by okosiako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstlast(t_list **alst, void *content, size_t size_content)
{
	t_list *temp;
	t_list *new_elem;

	new_elem = ft_lstnew(content, size_content);
	if (!*alst)
		*alst = new_elem;
	temp = *alst;
	while (temp->next)
		temp = temp->next;
	temp->next = new_elem;
}
