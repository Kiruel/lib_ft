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

static int		ft_strlen(char *str)
{
	int n;

	n = 0;
	if (!str)
		return (0);
	while (str[n] != 0)
		n++;
	return (n);
}

char			*ft_strtrim(const char *s)
{
	int		i;
	int		j;
	int		p;
	char	*str;

	i = 0;
	p = 0;
	if (!s)
		return (0);
	j = ft_strlen((char*)s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (j < i)
	{
		str = (char*)malloc(1);
		str[0] = 0;
		return (str);
	}
	str = (char*)malloc(sizeof(char) * (j - i) + 2);
	while (p + i <= j)
	{
		str[p] = ((char*)s)[p + i];
		p++;
	}
	str[j + 1] = 0;
	return (str);
}
