/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 12:06:41 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/10 16:22:41 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	if (str != 0)
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
}

void	ft_putnbr(int nb)
{
	int unite;
	int dizaine;

	if  (nb == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		unite = nb % 10;
		dizaine = (nb - unite) / 10;
		ft_putnbr(dizaine);
		ft_putnbr(unite);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
