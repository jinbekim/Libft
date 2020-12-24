/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 21:52:13 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/24 18:21:14 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_start_count(char const *s1, char const *set)
{
	size_t	start;
	size_t	j;

	start = 0;
	j = 0;
	while (set[j] && s1[start])
	{
		if (s1[start] == set[j])
		{	
			start++;
			j = 0;
			continue;
		}
		j++;
	}
	return (start);
}

static size_t	ft_end_count(char const *s1, char const *set)
{
	size_t	end;
	size_t	j;

	j = 0;
	end = ft_strlen(s1);
	while (set[j] && (end != 0))
	{
		if (s1[end - 1] == set[j])
		{
			end--;
			j = 0;
			continue;
		}
		j++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*arr;
	size_t	i;

	if (!(ft_strlen(s1)))
		return (0);
	i = 0;
	start = ft_start_count(s1, set);
	end = ft_end_count(s1, set);
	if (!(arr = malloc((end - start) + 1)))
		return (0);
	while (start < end)
	{
		arr[i] = s1[start];
		i++;
		start++;
	}
	arr[i] = 0;
	return (arr);
}
