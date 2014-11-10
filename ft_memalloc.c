#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
  char *newb;
  size_t i;

	i = 0;
  	newb = malloc(size);
  	while (i < size)
  	{
  		newb[i] = 0;
  		i++;
  	}
  	return ((void*)newb);
}
