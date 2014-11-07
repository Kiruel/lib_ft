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

#include "libft.h"

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
