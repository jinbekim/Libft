/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 23:02:26 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/24 18:04:05 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
		size_t	i;
		size_t	count;
		int		token;

		token = 0;
		i = 0;
		count = 0;
		while (s[i])
		{
			if (s[i] == c)
			{	
				token = 0;
				i++;
			}
			else if (token == 0)
			{
				count++;
				token = 1;
				i++;
			}
			else
				i++;
		}
		return (count);
}

static int		ft_split_len(char **split, char const *s, char c, size_t count)
{
		size_t	i;
		size_t	j;
		size_t	len;

		j = 0;
		i = 0;
		while (j < count)
		{
			len = 0;
			while (s[i] == c)
				i++;
			while (s[i] != c)
			{
				i++;
				len++;
			}
			if (!(split[j] = malloc(len + 1)))
			{
				while (j > 0)
				{
					j--;
					free(split[j]);
				}
				return (0);
			}
			j++;
		}
		return (1);
}

char	**ft_split(char const *s, char c)
{
		size_t	count;
		size_t	i;
		char	**split;
		char hi[1];
		hi[0] = c;
		i = 0;
		s = ft_strtrim(s, hi);
		if (!(count = ft_count(s, c)))
			return (0);
		if (!(split = malloc(sizeof(char *) * count)))
			return (0);
		if (!(ft_split_len(split, s, c, count)))
		{
			free(split);
			return (0);
		}
		while (i < count)
		{
			s = ft_memccpy(split[i], s, c, 1000000);
			while (*s != c)
				s++;
			i++;
		}
		return (split);
}
