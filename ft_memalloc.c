#include <strings.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
  char *new;
  size_t i;

  new = (char*)malloc(sizeof(char) * size);
  while (i < size)
  {
  	size[i] = 0;
  	i++;
  }
  return (new);
}
