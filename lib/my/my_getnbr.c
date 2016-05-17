/*
** my_getnbr.c for Pool Day04 in /home/laroch_f/Desktop/Piscine/Piscine_C_J04
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Fri Mar  4 10:43:54 2016 Hugo Laroche
** Last update Fri Mar  4 14:28:22 2016 Hugo Laroche
*/

int	is_num(char n)
{
  if (n >= 48 && n <= 57)
    {
      return (n - 48);
    }
  else
    {
      return (-1);
    }
}

int	fin_nbr(char *str)
{
  int	len;
  int	cpt;

  len = my_strlen(str);
  cpt = 0;
  while (is_num(*str) == -1 && cpt < len)
    {
      str = str + 1;
      cpt = cpt + 1;
    }
  while (is_num(*str) != -1 && cpt < len)
    {
      str = str + 1;
      cpt = cpt + 1;
    }
  return (cpt);
}

char	*to_begining(char *str, int *cpt, char *last, int *len)
{
  *len = fin_nbr(str);
  *cpt = 0;
  while (is_num(*str) == -1 && *cpt < *len)
    {
      *last = *str;
      str = str + 1;
      *cpt = *cpt + 1;
    }
  return (str);
}

int	convert(long nbr)
{
  if (nbr >= -2147483648 && nbr <= 2147483647)
    return (nbr);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	len;
  int	cpt;
  long	nbr;
  char	last;

  nbr = 0;
  str = to_begining(str, &cpt, &last, &len);
  if ((len - cpt) > 10)
    return (0);
  while (is_num(*str) != -1 && cpt < len)
    {
      nbr = nbr + my_poww(len - cpt - 1) * is_num(*str);
      str = str + 1;
      cpt = cpt + 1;
    }
  if (last == '-')
    nbr = -nbr;
  return (convert(nbr));
}
