#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 15:18:52 by etheodor          #+#    #+#              #
#    Updated: 2014/11/06 15:49:26 by etheodor         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft.a

CFLAG = -Wall -Wextra -Werror

SOURCE = ft_putchar.c \
ft_putstr.c \
ft_memset.c \
ft_putnbr.c \
ft_bzero.c \
ft_strlen.c \
ft_strdup.c \
ft_strcpy.c \
ft_strncpy.c \
ft_strstr.c \
ft_strcmp.c \
ft_strncmp.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memchr.c \
ft_strcat.c \
ft_memmove.c \
ft_memcmp.c \
ft_strncat.c \
ft_strlcat.c \
ft_strchr.c \
ft_strrchr.c \
ft_strnstr.c \
ft_atoi.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c

POINTO = ft_putchar.o \
ft_putstr.o \
ft_memset.o \
ft_putnbr.o \
ft_bzero.o \
ft_strlen.o \
ft_strdup.o \
ft_strcpy.o \
ft_strncpy.o \
ft_strstr.o \
ft_strcmp.o \
ft_strncmp.o \
ft_memcpy.o \
ft_memccpy.o \
ft_memchr.o \
ft_strcat.o \
ft_memmove.o \
ft_memcmp.o \
ft_strncat.o \
ft_strlcat.o \
ft_strchr.o \
ft_strrchr.o \
ft_strnstr.o \
ft_atoi.o \
ft_isalpha.o \
ft_isdigit.o \
ft_isalnum.o \
ft_isascii.o \
ft_isprint.o \
ft_toupper.o \
ft_tolower.o

all: $(NAME)

$(NAME):
	gcc $(CFLAG) -c $(SOURCE) -I includes
	ar rc libft.a $(POINTO)
	ranlib libft.a
test:
	gcc $(CFLAG) main_test_all.c libft.a

clean:
	rm -rf $(POINTO)


fclean: clean
	rm -rf $(NAME)

re: fclean all