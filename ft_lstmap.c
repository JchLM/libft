/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerchois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 20:03:05 by jerchois          #+#    #+#             */
/*   Updated: 2018/04/07 18:26:34 by jerchois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*prev_elem;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	new_list = f(lst);
	prev_elem = new_list;
	lst = lst->next;
	while (lst)
	{
		new_elem = f(lst);
		prev_elem->next = new_elem;
		prev_elem = new_elem;
		lst = lst->next;
	}
	prev_elem->next = NULL;
	return (new_list);
}
