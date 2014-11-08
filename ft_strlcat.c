/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:11:08 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/07 16:12:20 by etheodor         ###   ########.fr       */
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

static char	*ft_strcat(char *dst, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dst);
	j = 0;
	while (i < (ft_strlen(dst) + ft_strlen(src)))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (dst);
}

size_t	ft_strlcat(char *dst, char *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;
	size_t	k;

	k = n;
	s1 = dst;
	s2 = src;
	k++;
	i = ft_strlen(ft_strcat(s1, s2));
	return (i);
}
