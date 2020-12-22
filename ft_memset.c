/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 23:30:17 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/22 22:35:29 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*b1;

	b1 = b;
	i = 0;
	while (i < len)
	{
		b1[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
