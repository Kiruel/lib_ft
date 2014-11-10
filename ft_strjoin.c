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

char	*ft_strjoin(char const *s1, char const *s2)
{
  char *s3;
  int	i;
  int	j;

  s3 = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
  i = 0;
  j = 0;
  while (i < ft_strlen(s1))
    {
      s3[i] = s1[i];
      i++;
    }
  while (i < ft_strlen(s3))
    {
      s3[i] = s2[j];
      i++;
      j++;
    }
  s3[i] = '\0';
  return (s3);
}
