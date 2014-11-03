#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 15:18:52 by etheodor          #+#    #+#              #
#    Updated: 2014/11/03 16:02:27 by etheodor         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft.a

SOURCE = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_memset.c srcs/ft_putnbr.c
POINTO = ft_putchar.o ft_putstr.o ft_swap.o ft_memset.o ft_putnbr.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SOURCE) -I includes
	ar rc libft.a $(POINTO)
	ranlib libft.a

clean:
	rm -rf $(POINTO)


fclean: clean
	rm -rf $(NAME)

re: fclean all