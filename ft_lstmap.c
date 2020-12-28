/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 22:24:16 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/28 16:14:47 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new;

	if (!(lst && f && del))
		return (0);
	curr = NULL;
	new = NULL;
	while (lst)
	{
		if (!(curr = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, curr);
		lst = lst->next;
	}
	return (new);
}
