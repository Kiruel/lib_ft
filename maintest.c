#include <string.h>
#include "libft.h"

int main()
{
	int nbr;
	char *result;

	nbr = -956;
	result = ft_itoa(nbr);
	ft_putstr(result);
	ft_putchar('\n');
	return (0);
}
