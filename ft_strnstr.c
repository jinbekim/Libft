/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 20:56:47 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/22 22:54:32 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char		*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	n = ft_strlen(nee);
	while (i <= len)
	{
		j = 0;
		while ((i + j <= len) && (hay[i + j] == nee[j]))
			j++;
		if (j == n)
			return ((char *)&hay[i]);
		i++;
	}
	return (0);
}
