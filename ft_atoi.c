/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:32:11 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/10 17:32:13 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int   ft_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
  {
    i++;
    str++;
  }
  return (i);
}

int	ft_atoi(const char *str)
{
  int i;
  int p10;
  int result;

  i = 1;
  p10 = 1;
  if (str[0] == '-')
    i++;
  while (i < ft_strlen((char*)str))
    {
      p10 *= 10;
      i++;
    }
  i = 0;
  if (str[0] == '-')
    i++;
  result = 0;
  while (str[i] != '\0')
    {  
      if (!(str[i] > 47 && str[i] < 58))
        return (0);
      result += (str[i] - 48) * p10;
      p10 /= 10;
      i++;
    }
    if (str[0] == '-')
      result = -result;
  return (result);
}