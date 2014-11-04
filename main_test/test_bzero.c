/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:25:54 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/04 11:20:53 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char *a;

	a = (char*)malloc(sizeof(char) * 10 + 1);
	a = "toto";
	ft_putstr(a);
	ft_putchar('\n');
	ft_bzero(a, 2);
	ft_putstr(a);
	ft_putchar('\n');
	return (0);
}
