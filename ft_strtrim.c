/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:37:05 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/11 16:37:46 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
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

char		*ft_strtrim(char const *s)
{
	char	*cpy;
	int		i;
	int		j;
	int		p;

	i = 0;
	p = 0;
	j = ft_strlen((char*)s);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	cpy = (char*)malloc(sizeof(char) * (j - i + 1));
	if (cpy == 0)
		return (0);
	while (i < j)
	{
		cpy[p] = s[i];
		i++;
	}
	cpy[p] = '\n';
	return (cpy);
}
