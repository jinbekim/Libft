/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 21:45:21 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/23 21:52:00 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
		size_t	len1;
		size_t	len2;
		size_t	i;
		char	*arr;

		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		i = 0;
		if (!(arr = malloc(len1 + len2 +1)))
				return (0);
		while (s1[i])
		{
			arr[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i])
		{
			arr[len1 + i] = s2[i];
			i++;
		}
		arr[len1 + i] = 0;
		return (arr);
}
