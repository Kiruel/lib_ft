#include <strings.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
  char *new;

  new = (char*)malloc(sizeof(char) * size);
  if (new == 0)
    return (0);
  return (new);
}
