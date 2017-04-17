/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ionofrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 12:56:11 by ionofrei          #+#    #+#             */
/*   Updated: 2017/04/17 12:58:44 by ionofrei         ###   ########.fr       */
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
