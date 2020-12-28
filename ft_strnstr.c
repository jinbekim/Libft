/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 20:56:47 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/28 23:03:03 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	n;

	if (!*hay)
		return (NULL);
	if (!(n = ft_strlen(nee)))
		return ((char *)hay);
	while (len >= n && *hay)
	{
		if (!(ft_strncmp(hay, nee, n)))
			return ((char *)hay);
		hay++;
		len--;
	}
	return (NULL);
}
