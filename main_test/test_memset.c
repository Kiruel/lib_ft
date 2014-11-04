/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:53:39 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/03 15:06:25 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char *a;

	a = (char*)malloc(sizeof(char) * 10 + 1);
	a = ft_memset(a, 110, 3);
	ft_putstr(a);
	ft_putchar('\n');
	return (0);
}
