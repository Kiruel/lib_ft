/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:17:55 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/10 18:23:08 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int	i;
  char		*new;

  i = 0;
  new = (char*)malloc(sizeof(char) * ft_strlen((char*)s) + 1);
  if (new == 0)
      return (0);
  while (s[i])
    {
		new[i] = f(i, s[i]);
		i++;
    }
  new[i] = '\0';
  return (new);
}
