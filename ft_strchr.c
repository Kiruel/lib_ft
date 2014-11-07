#include "libft.h"

char	*ft_strchr(char *s, int c)
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
