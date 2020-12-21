/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:50:12 by jinbekim          #+#    #+#             */
/*   Updated: 2020/12/21 23:17:02 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int arg);
int		ft_isprint(int arg);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isspace(int arg);
int		ft_isascii(int arg);
int		ft_isalnum(int arg);
int		ft_isdigit(int arg);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);


#endif
