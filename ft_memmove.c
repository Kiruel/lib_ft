/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:53:02 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/04 18:00:49 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
  size_t i;

  i = 0;
  i = (size_t)ft_strlen(dst);
  if (len > i)
    {
      dst = (char*)malloc(sizeof(char) * len + 1);
      dst = ft_memcpy(dst, src, len);
    }
  else
    {
      dst = ft_memcpy(dst, src, len);
    }
  return (dst);
}
