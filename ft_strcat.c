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

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = ft_strlen((char*)s1);
	j = 0;
	while (i < (ft_strlen(s1) + ft_strlen((char*)s2)))
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = 0;
	return ((char*)s1);
}
