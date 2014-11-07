/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:13:19 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/07 16:08:55 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, char *src)
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
