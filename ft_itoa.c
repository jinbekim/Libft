/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 15:58:58 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/25 17:46:45 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			ft_digit_count(long long n)
{
	long long		digit;
	int				i;

	i = 0;
	digit = 1;
	while (n >= digit)
	{
		digit *= 10;
		i += 1;
	}
	return (i);
}

static char			*ft_itoa_core(int token, unsigned int n)
{
	int				i;
	char			*ans;

	i = ft_digit_count(n);
	if (token == 1)
	{
		if (!(ans = (char *)malloc(sizeof(char) * (i + 1))))
			return (0);
	}
	if (token == -1)
	{
		i += 1;
		if (!(ans = (char *)malloc(sizeof(char) * (i + 1))))
			return (0);
	}
	ans[i] = 0;
	while (n)
	{
		i--;
		ans[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (ans);
}

char				*ft_itoa(int n)
{
	char			*answer;
	unsigned int	tmp;

	if (n == 0)
	{
		if (!(answer = malloc(2)))
			return (0);
		answer[0] = '0';
		answer[1] = 0;
		return (answer);
	}
	if (n < 0)
	{
		tmp = (unsigned int)n * -1;
		answer = ft_itoa_core(-1, tmp);
		answer[0] = '-';
		return (answer);
	}
	else if (n > 0)
	{
		answer = ft_itoa_core(1, n);
		return (answer);
	}
}
