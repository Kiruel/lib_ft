/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:14:41 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/07 16:05:57 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char*)s)[i] == (char)c)
			return (s + i);
		i++;
	}
	return (0);
}
