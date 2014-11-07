#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t n)
{
  size_t i;
  char *s1;
  char *s2;
  size_t k;

  k = n;
  s1 = dst;
  s2 = src;

  
  i = ft_strlen(ft_strcat(s1, s2));
  return (i);
}
