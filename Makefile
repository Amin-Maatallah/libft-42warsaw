# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 17:22:32 by amaatall          #+#    #+#              #
#    Updated: 2024/12/18 10:25:56 by amaatall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_tolower.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
			ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c ft_toupper.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_calloc.c ft_strrchr.c \
			ft_memmove.c ft_strdup.c ft_strnstr.c ft_strjoin.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c ft_split.c ft_itoa.c ft_striteri.c
OBJECTS	= $(SOURCES:.c=.o)

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS		= $(BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)


bonus: fclean $(OBJECTS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJS)


clean:
	rm -f $(OBJECTS) $(BONUS_OBJS)


fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re bonus