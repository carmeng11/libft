# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cagomez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 19:50:15 by cagomez-          #+#    #+#              #
#    Updated: 2024/09/26 19:40:33 by cagomez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJDIR = obj/
RM = rm -rf
CC = cc
CFLAGS = -Werror -Wall -Wextra
LIB = ar -rcs
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c ft_tolower.c \
	ft_toupper.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_strnstr.c ft_strlcpy.c

OBJ = $(SRC:%.c=$(OBJDIR)%.o)

all: $(NAME)

$(OBJDIR):
	mkdir $@

$(OBJDIR)%.o: %.c $(OBJDIR)
	$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 