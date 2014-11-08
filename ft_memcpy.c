/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:12:51 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/07 16:07:28 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

static int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = (size_t)ft_strlen(dst);
	while (i < j)
	{
		if (n == i)
			return (dst);
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (dst);
}
