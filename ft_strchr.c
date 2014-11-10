/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:03:18 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/07 16:09:30 by etheodor         ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (0);
}
