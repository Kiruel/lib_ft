#include <strings.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
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
  	return (new);
}
