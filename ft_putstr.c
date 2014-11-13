/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 12:12:04 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/11 17:01:55 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	if (str != 0)
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
}
