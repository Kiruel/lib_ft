/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:40:44 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/11 17:52:01 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	int j;

	i = ft_strlen((char*)src);
	j = 0;
	while (i > n)
	{
		if (c == j)
			return (dst);
		((char*)dst)[j] = ((char*)src)[j];
		j++;
		i--;
		if (i == 0)
			return (dst);
	}
	return (0);
}

