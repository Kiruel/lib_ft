#include <string.h>
#include "libft.h"

int main()
{
  char s1[] = "poil de fion";
  char s2[] = "maison";
  size_t len;

  len = 4;
  memmove(s1, s2, len);
  ft_putstr(s1);
  ft_putchar('\n');
  return (0);
}
