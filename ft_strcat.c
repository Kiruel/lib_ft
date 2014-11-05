#include "libft.h"

char	*ft_strcat(char *dst, char *src)
{
  int i;
  int j;

  i = ft_strlen(dst - 1);
  j = 0; 
  while (i < (ft_strlen(dst - 1) + ft_strlen(src)))
    {
      dst[i] = src[j];
      i++;
      j++;
    }
  return (dst);
}
