int	ft_tolower(int c)
{
  if (c > 64 && c < 91)
    return (c + 32);
  if (c > 96 && c < 123)
    return (c);
  return (c);
}
