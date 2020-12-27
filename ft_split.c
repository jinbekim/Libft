/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 23:02:26 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/25 15:47:24 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t		i;
	size_t		count;
	int			token;

	token = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			token = 0;
		else if (token == 0)
		{
			count++;
			token = 1;
		}
		i++;
	}
	return (count);
}

int				ft_str_count(char **split, char const *s, char c)
{
	size_t		j;
	size_t		strlen;

	j = 0;
	while (*s)
	{
		strlen = 0;
		while (*s == c)
			s++;
		while (*s != c && *s != 0)
		{
			strlen++;
			s++;
		}
		if (strlen == 0)
			break ;
		if (!(split[j] = (char *)malloc(sizeof(char) * (strlen + 1))))
		{
			while (j > 0)
				free(split[j--]);
			return (0);
		}
		j++;
	}
	return (1);
}

char			**ft_split(char const *s, char c)
{
	size_t		count;
	size_t		i;
	size_t		j;
	char		**split;

	i = 0;
	count = ft_count(s, c);
	if (!(split = (char **)malloc(sizeof(char *) * (count + 1))))
		return (0);
	split[count] = 0;
	if (!(ft_str_count(split, s, c)))
		return (0);
	while (i < count)
	{
		j = 0;
		while (*s == c)
			s++;
		while (*s != c && *s != 0)
			split[i][j++] = *s++;
		split[i++][j] = 0;
	}
	return (split);
}
