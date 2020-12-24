# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinbekim <jinbekim@student.42seoul.k>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/22 18:47:30 by jinbekim          #+#    #+#              #
#    Updated: 2020/12/24 17:22:12 by jinbekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

PART1 = ft_atoi \
	ft_isalpha \
	ft_isprint \
	ft_toupper \
	ft_tolower \
	ft_isascii \
	ft_isalnum \
	ft_isdigit \
	ft_strncmp \
	ft_memcmp \
	ft_bzero \
	ft_memset \
	ft_memchr \
	ft_memcpy \
	ft_memmove \
	ft_memccpy \
	ft_strchr \
	ft_strrchr \
	ft_strnstr \
	ft_strlen \
	ft_strlcpy \
	ft_strlcat \
	ft_calloc \
	ft_strdup

PART2 = ft_strjoin \
	ft_strtrim \
	ft_split \
#	ft_itoa \
	ft_strmapi \
	ft_putchar_fb \
	ft_putstr_fb \
	ft_putendl_fb \
	ft_putnbr_fb

#BONUS = ft_lstnew \
	ft_listadd_front \
	ft_lstsize \
	ft_lstlast \
	ft_lstadd_back \
	ft_lstdelone \
	ft_lstclear \
	ft_lstiter \
	ft_lstmap

OBJ1 = $(addsuffix .o, $(PART1))
SRC1 = $(OBJ1:.o=.c)

OBJ2 = $(addsuffix .o, $(PART2))
SRC2 = $(OBJ2:.o=.c)

#OBJB = $(addsuffix .o, $(BONUS))
#SRCB = $(OBJB:.o=.c)

all : $(NAME)

$(NAME) : $(OBJ1) $(OBJ2)
	$(AR) $@ $^

$(OBJ1) : $(SRC1)
	$(CC) $(CFALGS) -c $^

$(OBJ2) : $(SRC2)
	$(CC) $(CFALGS) -c $^

#$(OBJB) : $(SRCB)
#	CC CFALGS -c $^

#bonus : $(OBJB)
#	AR $(NAME) $^

clean :
	rm -f $(OBJ1) $(OBJ2) $(OBJB)

fclean : clean
	rm -f $(NAME)

re : clean all
