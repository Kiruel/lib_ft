/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:41:48 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/11 16:42:50 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static void	*ft_memalloc(size_t size)
{
	char	*new3;
	size_t	i;

	i = 0;
	new3 = malloc(size);
	while (i < size)
	{
		new3[i] = 0;
		i++;
	}
	return ((void*)new3);
}

char		*ft_strnew(size_t size)
{
	char *new4;

	new4 = (char*)ft_memalloc(size + 1);
	return (new4);
}
