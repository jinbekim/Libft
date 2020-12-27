/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 20:22:03 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/25 20:28:14 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lstnew;

	if(!(lstnew = malloc(sizeof(t_list))))
		return (0);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}
