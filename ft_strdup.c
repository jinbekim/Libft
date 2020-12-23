/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 16:09:01 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/23 16:34:01 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*strdup(const char *s1)
{
	size_t	len;
	char	*c1;
	
	len = ft_strlen(s1);
	c1 = (char *)malloc(sizeof(char) * (len + 1));
	while (len >= 0)
	{
		c1[len] = s1[len];
		len--;
	}
	return (c1);
}