/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 16:34:12 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/23 19:53:57 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

static void		*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*b1;
	
	b1 = b;
	i = 0;
	while (i < len)
	{
			b1[i] = (unsigned char)c;
			i++;
	}
	return (b);
}

void		*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	len;

	len = count * size;
	if (!(arr = malloc(len)))
	{
		return (0);
	}
	ft_memset(arr, 0, len);
	return (arr);
}
