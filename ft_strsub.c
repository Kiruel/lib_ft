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
