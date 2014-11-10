/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 12:06:41 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/04 10:53:54 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
  int unite;
  int dizaine;
  
  if (nb < 0)
    {
      ft_putchar_fd('-', fd);
      nb = -nb;
    }
  if (nb > 9)
    {
      unite = nb % 10;
      dizaine = (nb - unite) / 10;
      ft_putnbr_fd(dizaine, fd);
      ft_putnbr_fd(unite, fd);
    }
  else
    {
      ft_putchar_fd(nb + 48, fd);
    }
}