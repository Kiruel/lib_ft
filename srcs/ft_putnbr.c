/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 12:06:41 by etheodor          #+#    #+#             */
/*   Updated: 2014/07/10 12:09:47 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int unite;
	int dizaine;

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
