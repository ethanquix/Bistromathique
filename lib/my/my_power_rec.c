/*
** my_power_rec.c for Pool Day05 in /home/laroch_f/Desktop/PiscineDay05/Piscine_C_J05
**
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
**
** Started on  Mon Mar  7 09:27:17 2016 Hugo Laroche
** Last update Mon Mar  7 12:49:29 2016 Hugo Laroche
*/

int	my_power_rec(int nb, int power)
{
  long	ret;

  if (power == 0)
    return (1);
  else if (power < 0)
    return (0);
  else
    {
      ret = nb * my_power_rec(nb, power - 1);
      if (ret > 2147483647 || ret < -2147483648)
	return (0);
      else
	return (ret);
    }
}
