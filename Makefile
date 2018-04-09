# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jechoisn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 14:11:41 by jechoisn          #+#    #+#              #
#    Updated: 2018/04/09 22:24:09 by jerchois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a





OBJ = ft_atoi.o ft_putchar.o ft_putstr.o ft_strcpy.o ft_strncpy.o ft_strlen.o\
		ft_strdup.o ft_range.o ft_strcmp.o ft_isalpha.o ft_isdigit.o\
		ft_isalnum.o ft_isascii.o ft_isprint.o ft_tolower.o ft_toupper.o\
		ft_memset.o ft_strcat.o ft_bzero.o ft_strncat.o ft_strncmp.o\
		ft_putnbr.o ft_putendl.o ft_putchar_fd.o ft_putendl_fd.o\
		ft_putstr_fd.o ft_putnbr_fd.o ft_memalloc.o ft_strnew.o ft_memdel.o\
		ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o\
		ft_strmapi.o ft_strequ.o ft_strnequ.o ft_memcpy.o ft_memccpy.o\
		ft_swap.o ft_memmove.o ft_memcmp.o ft_memchr.o ft_strchr.o\
		ft_strjoin.o ft_strtrim.o ft_isspace.o ft_split_whitespaces.o\
		ft_strsplit.o ft_strsub.o ft_strrchr.o ft_countwords.o ft_lstnew.o\
		ft_lstadd.o ft_lstiter.o ft_strstr.o ft_strnstr.o ft_strlcat.o\
		ft_itoa.o ft_lstmap.o ft_sqrt.o ft_lstdel.o ft_lstdelone.o\

HEADER = ./includes
CFLAGS = -Wall -Werror -Wextra
CC = gcc

all: $(NAME)

$(NAME):
	$(CC) -c $(SRCS) $(CFLAGS) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
