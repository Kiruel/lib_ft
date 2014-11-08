/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:14:11 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/07 16:13:50 by etheodor         ###   ########.fr       */
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

char	*ft_strncat(char *dst, char *src, size_t n)
{
	size_t i;
	size_t j;

	i = (size_t)ft_strlen(dst);
	j = 0;
	while ((int)i < ft_strlen(dst) + ft_strlen(src))
	{
		if ((size_t)src[j] == n)
			return (dst);
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (dst);
}
