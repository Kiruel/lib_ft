#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 15:18:52 by etheodor          #+#    #+#              #
#    Updated: 2014/11/10 18:32:12 by etheodor         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft.a

CFLAG = -Wall -Werror -Wextra 

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
ft_tolower.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putnbr_fd.c \
ft_memalloc.c \
ft_memdel.c \
ft_strnew.c \
ft_strdel.c \
ft_strclr.c \
ft_striter.c \
ft_striteri.c \
ft_strmap.c \
ft_strmapi.c \
ft_strequ.c \
ft_strnequ.c \
ft_strjoin.c \
ft_strtrim.c \
ft_putendl.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putnbr_fd.c \
ft_strsub.c

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
ft_tolower.o \
ft_putchar_fd.o \
ft_putstr_fd.o \
ft_putnbr_fd.o \
ft_memalloc.o \
ft_memdel.o \
ft_strequ.o \
ft_strnew.o \
ft_strdel.o \
ft_strclr.o \
ft_striter.o \
ft_striteri.o \
ft_strmap.o \
ft_strmapi.o \
ft_strnequ.o \
ft_strjoin.o \
ft_strtrim.o \
ft_putendl.o \
ft_putchar_fd.o \
ft_putstr_fd.o \
ft_putnbr_fd.o \
ft_strsub.o

all: $(NAME)

$(NAME):
	gcc $(CFLAG) -c $(SOURCE) -I includes
	ar rc libft.a $(POINTO)
	ranlib libft.a
test:
	gcc $(CFLAG) main.c libft.a

clean:
	rm -rf $(POINTO)


fclean: clean
	rm -rf $(NAME)

re: fclean all