#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int	i;
  char		*new;

  i = 0;
  new = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
  if (new == 0)
      return (0);
  while (s[i])
    {
      new[i] = f(s[i]);
      i++;
    }
  new[i] = '\0';
  return (new);
}
