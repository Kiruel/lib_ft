void	ft_strclr(char *s)
{
  int i;

  while (*s)
    {
      *s = 0;
      s++;
    }
}
