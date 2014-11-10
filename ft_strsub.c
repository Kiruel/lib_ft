/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:44:04 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/10 18:44:06 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
  int	i;
  char	*cpy

  i = 0;
  cpy = (char*)malloc(sizeof(char) * len + 1);
  while (i < len)
    {
      cpy[i] = s[start];
      i++;
      start++;
    }
  return (cpy);
}
