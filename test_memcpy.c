/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:24:55 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/04 14:33:43 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char a[] = "toto";
	char b[] = "maison";
	char *c;

	c = (char*)malloc(sizeof(char) * 10 + 1);
	c = ft_memcpy(b, a, 2);
	ft_putstr(c);
	ft_putchar('\n');
	return (0);
}
