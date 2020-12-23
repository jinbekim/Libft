/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.k>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:51:26 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/23 00:07:15 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*cst;
	char	*crc;
	
	cst = dst;
	crc = (char *)src;
	i = 0;
	while (i < n)
	{
		cst[i] = crc[i];
		if (crc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
