#include "libft.h"

char	*ft_strncat(char *dst, char *src, size_t n)
{
  size_t i;
  size_t j;

  i = (size_t)ft_strlen(dst);
  j = 0;
  while ((int) i < ft_strlen(dst) + ft_strlen(src))
    {
      if (src[j] == n)
	return (dst);
      dst[i] = src[j];
      i++;
      j++;
    }
  dst[i] = 0;
  return (dst);
}
