# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinbekim <jinbekim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/22 18:47:30 by jinbekim          #+#    #+#              #
#    Updated: 2020/12/29 17:53:08 by jinbekim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
SRCS_DIR = ./srcs/
OBJS_DIR = ./objs/
INCLUDES_DIR = ./includes/

FUNC = ft_atoi \
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
	ft_strdup \
	ft_strjoin \
	ft_strtrim \
	ft_split \
	ft_itoa \
	ft_strmapi \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	ft_substr

BONUS_FUNC = ft_lstnew \
	ft_lstadd_front \
	ft_lstsize \
	ft_lstlast \
	ft_lstadd_back \
	ft_lstdelone \
	ft_lstclear \
	ft_lstiter \
	ft_lstmap

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FUNC)))
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FUNC)))

BONUS_SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS_FUNC)))
BONUS_OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS_FUNC)))

all : $(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c -o $@ $^

$(NAME) : $(OBJS)
	$(AR) $@ $?

.PHONY : clean fclean re bonus

bonus : $(OBJS) $(OBJB)
	$(AR) $(NAME) $?

clean :
	$(RM) $(OBJS) $(OBJB)

fclean : clean
	$(RM) $(NAME)

re : clean all
