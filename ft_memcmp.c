/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:29:17 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/04 18:51:46 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void *s1, void *s2, size_t n)
{
	char	*i;
	char	*j;
	size_t	a;

	a = 0;
	i = (char*) s1;
	j = (char*) s2;
	while(a < n)
	{
		if(*i < *j)
			return(-1);
		if(*i > *j)
			return(1);
		a++;
	}
	return (0);
}