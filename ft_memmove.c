/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:43:40 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/22 22:47:28 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*cst;
	char	*crc;
	i = 0;
	cst = dst;
	crc = (char *)src;
	while (i < n)
	{
		cst[i] = crc[i];
		i++;
	}
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*cst;
	char	*crc;

	cst = dst;
	crc = (char *)src;
	if (len == 0)
		return (dst);
	i = len - 1;
	if ((dst > src) && ((size_t)(dst - src) < len))
	{
		cst[i] = crc[i];
		i--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
