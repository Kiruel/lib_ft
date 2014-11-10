/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:40:44 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/07 16:05:09 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s1;

	s1 = (char*)dst;
	i = 0;
	j = (size_t)ft_strlen(dst);
	while (i < j)
	{
		if (i < n)
			((char*)dst)[i] = ((char*)src)[i];
		if ((char)c == ((char*)src)[i])
			return (&s1[i + 1]);
		i++;
	}
	return (0);
}
