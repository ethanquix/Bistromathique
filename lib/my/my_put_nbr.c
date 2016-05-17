/*
** my_put_nbr.c for Pool Day03 in /home/laroch_f/Desktop/Piscine/work
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Wed Mar  2 15:00:06 2016 Hugo Laroche
** Last update Thu Mar  3 09:49:00 2016 Hugo Laroche
*/

int	my_pow(unsigned char n)
{
  int	ret;

  ret = 1;
  while (n > 0)
    {
      ret = ret * 10;
      n = n - 1;
    }
  return (ret);
}

int	is_negative(int n)
{
  if (n < 0)
    {
      n = -n;
      my_putchar('-');
      return (n);
    }
  else
    {
      return (n);
    }
}

/*
** Le rage-quit
** Mais classe !!
*/
int	cheat()
{
  my_putchar('-');
  my_putchar('2');
  my_putchar('1');
  my_putchar('4');
  my_putchar('7');
  my_putchar('4');
  my_putchar('8');
  my_putchar('3');
  my_putchar('6');
  my_putchar('4');
  my_putchar('8');
}

int		my_put_nbr(int nb)
{
  unsigned char	len;
  int		copy;
  int		diz;

  if (nb == -2147483648)
    {
      cheat();
      return (0);
    }
  nb = is_negative(nb);
  copy = nb;
  len = 1;
  while (copy > 9)
    {
      copy = copy / 10;
      len = len + 1;
    }
  while (len != 0)
    {
      diz = nb / my_pow(len-1);
      my_putchar(diz + 48);
      nb = nb - diz * my_pow(len-1);
      len = len - 1;
    }
}
