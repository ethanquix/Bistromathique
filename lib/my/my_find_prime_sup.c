/*
** my_find_prime_sup.c for Pool Day05 in /home/laroch_f/Desktop/PiscineDay05/Piscine_C_J05
** 
** Made by Hugo Laroche
** Login   <laroch_f@epitech.net>
** 
** Started on  Mon Mar  7 10:00:44 2016 Hugo Laroche
** Last update Wed Mar  9 20:36:30 2016 Hugo Laroche
*/

int	my_find_prime_sup(int nb)
{
  if (my_is_prime(nb) == 1)
    return (nb);
  while (my_is_prime(nb) != 1)
    {
      if (nb > 2147483647 || nb < -2147483648)
	return (0);
      nb = nb + 1;
    }
  return (nb);
}
