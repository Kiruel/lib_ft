#include <string.h>
#include "libft.h"

int main()
{
	int result;

	result = ft_atoi("-12a3");
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
