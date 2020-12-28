/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 22:24:16 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/28 14:55:03 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*head;

	curr = NULL;
	head = curr;
	if (!(lst && f && del))
		return (0);
	while (lst)
	{
		if (!(curr = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, curr);
		lst = lst->next;
	}
	return (head);
}
