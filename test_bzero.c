/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:25:54 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/04 13:44:32 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char a[] = "toto";
	int i;

	i = 9;
	ft_putstr(a);
	ft_putchar('\n');
	ft_bzero(a, 2);
	ft_putchar(a[3]);
	ft_putchar('\n');
	return (0);
}
