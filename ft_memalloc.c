#include <strings.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
  char *new;

  new = (char*)malloc(sizeof(char) * size);
  return (new);
}
