/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:28:38 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/10 17:34:40 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int 	ft_ten_power(int n)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (i < n)
	{
		result *= 10;
		i++;
	}
	return (result / 10);
}

char	*ft_itoa(int n)
{
	int c;
	int i;
	int p;
	char *result;

	i = 0;
	c = n;
	while (++i && c != 0)
		c /= 10;
	result = (char*)malloc(sizeof(char) * i + (n < 0));
	result[i - 1] = '\0';
	p = i - 1;
	c = p;
	i = 0;
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
		p++;
		i++;
	}
	while (i != p)
	{
		result[i] = (n / ft_ten_power(c)) + 48;
		n = n - (n / ft_ten_power(c)) * ft_ten_power(c);
		c--;
		i++;
	}
	return (result);
}
