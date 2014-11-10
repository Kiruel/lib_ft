#include <stdlib.h>
#include <strings.h>

static void	*ft_memalloc(size_t size)
{
  char *new;
  size_t i;

	i = 0;
  	new = malloc(size);
  	while (i < size)
  	{
  		new[i] = 0;
  		i++;
  	}
  	return ((void*)new);
}

char	*ft_strnew(size_t size)
{
  char *new;

  new = (char*)ft_memalloc(size);
  return (new);
}
