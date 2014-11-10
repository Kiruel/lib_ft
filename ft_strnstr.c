/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:37:24 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/07 16:29:58 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int 	i;
	size_t 	j;

	j = 0;
	while (*s1 && j < n)
	{
		if (*s1 == *s2)
		{
			i = 0;
			while (s1[i] == s2[i] && j + i < n)
			{
				i++;
				if (s2[i] == 0)
					return ((char*)s1);
			}
		}
		s1++;
		j++;
	}
	return (0);
}
